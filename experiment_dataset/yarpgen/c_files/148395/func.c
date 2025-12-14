/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148395
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
    var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0))))) ^ (((/* implicit */int) var_1)))))));
    var_14 |= ((/* implicit */short) (+(((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) 7282132447168814029LL)) ? (((((578121184U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-3519))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [(unsigned char)13] [i_1 + 2] [i_1 + 1] [(unsigned char)13] [i_1 + 2])) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 + 2])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1])))))));
                        var_16 = ((/* implicit */unsigned short) -8983655356315336291LL);
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) 1761945577010460102LL)) && (((/* implicit */_Bool) (~(2769388990U)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_4] [i_5])) == (((/* implicit */int) (_Bool)0))))) & (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_4))))))));
                    arr_14 [(unsigned short)12] [i_4] [i_4] = ((/* implicit */_Bool) var_11);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 4; i_7 < 21; i_7 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_4] [i_4] [i_0] [i_6] [i_0] = arr_19 [i_7 + 1] [(signed char)1] [i_7 - 4] [i_7 + 4] [i_7 - 1] [i_7] [i_7 + 4];
                                var_19 -= ((/* implicit */unsigned int) arr_8 [8] [i_4] [i_6] [i_5] [i_4] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((long long int) var_3)))));
        var_21 ^= ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) -1677440757)))));
        var_22 = ((((/* implicit */_Bool) (short)-30771)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5881580910160784440LL));
    }
}
