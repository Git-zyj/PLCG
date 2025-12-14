/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102409
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) max((((/* implicit */int) var_9)), (var_10)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) != (8674590757624642489ULL))))))));
                var_14 = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) var_13)) ? (var_7) : (var_4))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [19])) && (((/* implicit */_Bool) arr_1 [i_1])))))))));
                var_15 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_9);
    var_17 = var_5;
    /* LoopNest 3 */
    for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (unsigned char i_4 = 2; i_4 < 6; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((int) (+(arr_2 [i_4] [i_4 + 1] [i_4]))));
                    arr_15 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */int) (_Bool)1)) << (((-1374467202) + (1374467220))))), (((/* implicit */int) ((signed char) (_Bool)0)))));
                    var_19 = ((/* implicit */unsigned char) (((~(1025046939))) | ((+(var_10)))));
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        var_20 = arr_0 [i_2] [i_3];
                        arr_20 [i_2] [i_3] [i_2] [i_3] [i_2] = min((((/* implicit */signed char) ((((((/* implicit */int) arr_16 [i_2 - 3] [i_2] [i_4 - 1])) != (((/* implicit */int) arr_12 [i_2] [i_2])))) || (((/* implicit */_Bool) (signed char)-73))))), ((signed char)-61));
                        arr_21 [i_2] [i_3] [i_2] [(signed char)9] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_5]))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        var_21 = (~((((_Bool)1) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) arr_4 [i_2])))) : (((((/* implicit */_Bool) 17624137031716415074ULL)) ? (var_11) : (((/* implicit */int) var_9)))))));
                        var_22 += min(((_Bool)1), ((_Bool)0));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 8; i_7 += 1) 
                    {
                        var_23 -= ((/* implicit */_Bool) var_13);
                        var_24 ^= ((/* implicit */int) arr_12 [i_4 + 4] [i_3]);
                        arr_28 [i_4] [0] [i_4] [i_7 - 2] |= ((/* implicit */int) (-(arr_23 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_7])));
                    }
                }
            } 
        } 
    } 
}
