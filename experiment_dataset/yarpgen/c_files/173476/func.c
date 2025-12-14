/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173476
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
    var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) var_8)), (min((var_7), (((/* implicit */unsigned long long int) var_10))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 3; i_3 < 8; i_3 += 3) /* same iter space */
                    {
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_7 [i_0] [i_3] [i_2] [(signed char)4] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))))) : (((((((/* implicit */long long int) arr_0 [i_0])) != (9223372036854775807LL))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) arr_4 [(signed char)0])))))));
                        var_13 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (signed char)-94))))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))));
                    }
                    for (int i_4 = 3; i_4 < 8; i_4 += 3) /* same iter space */
                    {
                        var_14 = var_1;
                        var_15 = ((/* implicit */signed char) (short)25670);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */int) (signed char)-48);
                            var_17 += ((/* implicit */int) var_1);
                            arr_16 [i_0] [i_1] [i_1] [i_1] [i_5 - 1] [11LL] &= ((/* implicit */unsigned long long int) min((((min((arr_7 [i_0] [i_1] [i_2] [i_4 + 2] [(unsigned char)10]), (((/* implicit */long long int) var_1)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_8))))), (max((((/* implicit */long long int) (_Bool)1)), (((long long int) var_6))))));
                            var_18 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (arr_0 [(_Bool)1]))) != ((-(((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) -1992954961)) / (arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5])))) ? (((arr_8 [(unsigned char)3] [(signed char)7] [(unsigned char)3] [i_5 + 1]) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_13 [i_2])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3798018685U)) ? (((/* implicit */unsigned int) 193200043)) : (2947322910U))))));
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((((/* implicit */int) min((var_2), (arr_18 [i_0] [i_1] [i_2] [i_6])))) ^ (arr_15 [i_0] [i_0]))) << (((((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)215)))) + (121))) - (27))))))));
                        var_20 = ((/* implicit */unsigned int) 13981616744604873543ULL);
                    }
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned char)122), (((/* implicit */unsigned char) (_Bool)1))))) >= (((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_0])))) : (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_8)))))))));
                }
            } 
        } 
    } 
}
