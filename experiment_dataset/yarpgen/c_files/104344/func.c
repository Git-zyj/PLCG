/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104344
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) arr_9 [(unsigned char)7] [i_0] [i_1] [9ULL] [i_3] [i_3]);
                            var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 1865086896077535832ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -614974626)) ? (18383699962419525430ULL) : (((/* implicit */unsigned long long int) -776939178))))) ? (var_0) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-113)), ((unsigned short)0)))))) : (max((((((/* implicit */int) (short)-10604)) + (arr_11 [i_3] [i_2] [i_1] [i_0]))), (((/* implicit */int) (short)-10602))))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (signed char)114))));
                            var_23 += ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)0))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    arr_14 [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [(signed char)0]);
                    var_24 ^= ((/* implicit */short) max((((int) max((arr_4 [i_0] [i_1 + 1]), (((/* implicit */unsigned long long int) -1618099506))))), ((-(((/* implicit */int) (signed char)104))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    var_25 ^= ((/* implicit */short) ((unsigned long long int) (signed char)-91));
                    var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1 + 2] [11])) : (((/* implicit */int) arr_7 [i_1 + 3] [i_1]))));
                }
                for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    var_27 *= ((/* implicit */short) var_1);
                    arr_23 [i_0] [i_1 + 3] [i_6] = ((/* implicit */unsigned long long int) arr_13 [i_0]);
                    arr_24 [i_0] = -1763262316;
                }
                for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    var_28 -= ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_17 [i_0] [i_7] [i_1 + 2])))));
                    arr_29 [i_1 + 2] [i_1 + 2] [i_0] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1763262304))))), (max((9577946266614049479ULL), (((/* implicit */unsigned long long int) (signed char)-49))))))));
                    var_29 = ((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) (((_Bool)0) ? (8341816375354451000ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81)))))));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        arr_32 [i_0] [i_1] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (1510188129) : (1510188130))));
                        var_30 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_13)))))), (((unsigned long long int) 1046828440))));
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 13; i_9 += 2) 
                    {
                        var_31 ^= ((/* implicit */short) ((int) ((((/* implicit */_Bool) 1510188141)) ? (-1510188107) : (((/* implicit */int) (signed char)-42)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
                        {
                            var_32 = ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned short)13228)));
                            var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -1510188130)) == (((((/* implicit */_Bool) arr_15 [(signed char)13] [(unsigned char)6] [i_9] [i_0])) ? (((arr_36 [2] [i_9] [i_7] [i_1 + 1] [i_0]) - (17486904834500335318ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_30 [i_0] [i_0]), ((short)10611)))))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
                        {
                            arr_43 [i_0] [i_0] [i_7 + 3] [(signed char)5] [i_11] = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) arr_35 [(signed char)3] [i_11] [i_9 - 1] [i_9 - 3])))));
                            var_34 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_17 [i_11] [i_0] [i_0]))))));
                            var_35 = ((/* implicit */signed char) ((-5068533468834382847LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))));
                            arr_44 [i_0] = ((int) (short)8077);
                            var_36 = ((/* implicit */unsigned char) var_13);
                        }
                    }
                }
                arr_45 [i_0] [i_0] = ((/* implicit */_Bool) min(((short)-22825), (((/* implicit */short) (unsigned char)72))));
            }
        } 
    } 
    var_37 = ((/* implicit */long long int) var_2);
    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (~(8341816375354451000ULL))))));
}
