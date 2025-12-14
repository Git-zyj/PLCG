/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149501
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
    var_14 = ((/* implicit */unsigned long long int) var_11);
    var_15 = ((/* implicit */unsigned short) max(((+((+(((/* implicit */int) var_12)))))), (((/* implicit */int) (signed char)8))));
    var_16 = ((/* implicit */signed char) var_7);
    var_17 = (+(((/* implicit */int) (unsigned short)18102)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */int) var_12);
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned long long int) var_10)))));
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 9; i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0 + 2] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1])) ? (arr_6 [i_1] [i_1 + 2]) : (((/* implicit */int) (unsigned short)55105))))));
                    var_20 += (short)31125;
                    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [(unsigned char)8] [(unsigned char)8]) ? (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(arr_3 [4] [4])))) : (((arr_3 [(unsigned short)0] [(unsigned short)0]) ? (((/* implicit */int) arr_3 [(signed char)4] [(signed char)4])) : (((/* implicit */int) arr_3 [(short)8] [(short)8]))))));
                }
                for (short i_3 = 1; i_3 < 9; i_3 += 1) /* same iter space */
                {
                    var_22 *= ((/* implicit */unsigned short) (((~(max((((/* implicit */long long int) arr_4 [i_0] [(unsigned short)6] [i_1] [10])), (-8271657993262107927LL))))) + (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [(_Bool)1])))))));
                    arr_10 [i_1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4721))) + (4965568431020907919ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_3 [i_1 - 2] [i_1])))))));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_0))));
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3337096464U)) ? (3135416477U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11546)))))) ? (((/* implicit */int) arr_9 [i_0 + 1])) : (((/* implicit */int) var_0)));
                    arr_12 [i_0] [7ULL] [i_1] [i_0] = ((/* implicit */short) (((~((~(((/* implicit */int) (unsigned short)15945)))))) ^ (((((/* implicit */_Bool) 7800834603909754739LL)) ? (((/* implicit */int) min((var_8), (((/* implicit */short) (_Bool)1))))) : (max((arr_6 [i_1] [(short)11]), (arr_6 [i_1] [i_3])))))));
                }
                for (short i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)38373)) ? (((/* implicit */int) (short)25062)) : (((/* implicit */int) (signed char)-64)))))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((((max((((/* implicit */int) (unsigned short)264)), (arr_6 [i_5] [i_4 + 1]))) << (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_5] [i_0 + 1] [i_0 + 1] [i_1 + 2] [i_6])) ? (-981265545) : (((/* implicit */int) ((arr_0 [i_4] [i_5]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1 + 1] [i_1 + 1] [i_6])))))))))))));
                                var_26 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_0] [i_1] [2] [i_0])) + (2147483647))) << (((((/* implicit */int) arr_15 [i_6] [i_1] [i_0])) - (1)))));
                                arr_20 [(unsigned short)1] [(unsigned short)1] [(unsigned char)1] [(unsigned char)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9180806567747315244LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */short) max((min((((((/* implicit */_Bool) -966318471)) ? (11042460569898025845ULL) : (((/* implicit */unsigned long long int) 687057574)))), (arr_0 [i_4] [(_Bool)1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_8] [i_8] [i_8] [(short)3] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) (unsigned short)24900)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) * (3264480179U))))))));
                                var_28 *= (!(((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)20407))))))));
                                arr_27 [i_8] [i_7] [(unsigned char)6] [i_1] [i_1 + 3] [i_0] [i_0 - 1] = (~(max((((/* implicit */unsigned int) (short)-4760)), (1951514766U))));
                            }
                        } 
                    } 
                    arr_28 [i_1] [i_1] [i_1 + 1] = ((/* implicit */int) (((_Bool)1) || ((_Bool)0)));
                    var_29 = ((/* implicit */unsigned short) 487577067U);
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28109))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) >> ((((~(((/* implicit */int) (unsigned char)37)))) + (43))))))));
                }
            }
        } 
    } 
}
