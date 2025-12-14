/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140613
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1295052548)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (-4009008667518677544LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (+((+((-2147483647 - 1))))));
        arr_5 [i_0] = ((/* implicit */int) (~((+(-4009008667518677529LL)))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 2) 
    {
        var_14 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1] [14U])) > (max(((((-2147483647 - 1)) / (((/* implicit */int) (unsigned char)182)))), (((/* implicit */int) (signed char)44))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                {
                    {
                        arr_17 [i_3] [i_2] [(unsigned char)0] = ((/* implicit */long long int) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))), ((+(((/* implicit */int) (unsigned short)13156))))))));
                        arr_18 [i_1] [4] [i_1] = ((/* implicit */_Bool) 394191535003604289LL);
                        arr_19 [9ULL] [i_1] [i_2] [i_1] = ((/* implicit */short) (((-(max((-4408645557884807493LL), (((/* implicit */long long int) arr_6 [i_2])))))) >= (((((/* implicit */_Bool) 394191535003604289LL)) ? (2799247405291969111LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15766)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            for (unsigned char i_7 = 4; i_7 < 17; i_7 += 2) 
            {
                {
                    arr_26 [i_5] [i_5] [15LL] [i_7 - 4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) -7942508262682953500LL)), ((~(max((((/* implicit */unsigned long long int) (signed char)107)), (17226218144382279867ULL)))))));
                    var_15 = (-(((((/* implicit */unsigned long long int) 500844787U)) * (((((/* implicit */_Bool) (unsigned short)7328)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_16 -= ((/* implicit */unsigned short) (~(-1392626664184919179LL)));
                }
            } 
        } 
        arr_27 [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5 + 1]))) & (-2799247405291969112LL)))));
    }
    var_17 = ((/* implicit */signed char) ((max((((/* implicit */long long int) ((((var_3) + (2147483647))) >> (((8650047774652294836LL) - (8650047774652294834LL)))))), (-8084402155736665423LL))) > (max((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) var_11)), (2799247405291969112LL)))))));
}
