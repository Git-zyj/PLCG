/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18759
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
    var_10 |= ((/* implicit */int) max((((/* implicit */unsigned short) (short)18)), ((unsigned short)58558)));
    var_11 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)133))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = ((((/* implicit */_Bool) (unsigned char)170)) && (((/* implicit */_Bool) (unsigned char)153)));
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    var_13 ^= ((/* implicit */unsigned short) min((((min((var_7), (((/* implicit */unsigned int) var_6)))) > (var_0))), (var_4)));
                    arr_8 [14LL] [i_2] [i_2] = ((/* implicit */unsigned char) max((((((var_5) / (((/* implicit */long long int) 1U)))) / (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_6))))))), (((/* implicit */long long int) (+(((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)1)))))))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */_Bool) (short)-128);
                    arr_12 [(short)5] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 2771957300U)) <= (6104744676626002898ULL)));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_3] [i_3] [i_3] [(unsigned char)15] [i_5] [i_5] = ((/* implicit */signed char) var_9);
                            var_15 *= ((/* implicit */_Bool) var_7);
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_6)))))));
                            var_17 = ((/* implicit */long long int) var_4);
                        }
                        var_18 = ((/* implicit */short) (~(((var_4) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (var_7)));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (unsigned short)56538))));
                        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)156))));
                    }
                }
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 21; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_22 -= ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_6))))), (max((var_5), (((/* implicit */long long int) (_Bool)1))))))));
                            var_23 = ((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned char)208))))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (7470251559767133043LL))))));
                            var_24 += ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (var_0)))) != (max((max((0LL), (((/* implicit */long long int) (unsigned short)64018)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (((-(((/* implicit */int) var_3)))) - ((~(((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
