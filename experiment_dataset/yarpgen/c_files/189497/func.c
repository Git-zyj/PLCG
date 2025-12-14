/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189497
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_3 [i_1] [i_2]))) ? (((((/* implicit */int) var_11)) >> (((268435455) - (268435446))))) : (arr_1 [i_2])))) : (((((((/* implicit */int) (signed char)-90)) != (((/* implicit */int) arr_3 [i_0] [i_2])))) ? (((((/* implicit */_Bool) var_10)) ? (16268884416078799702ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)92)) && (((/* implicit */_Bool) (short)388))))))))));
                    arr_9 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned short) arr_2 [0LL])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                                var_12 = (unsigned char)34;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-97)) ? (((((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_5] [i_5])) % (((/* implicit */int) (unsigned short)56842)))) : (((/* implicit */int) (unsigned short)36488))))) ? (((var_2) ? (((((/* implicit */_Bool) -1647951743)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)133)) ? (arr_23 [i_0] [i_1] [i_1]) : (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)69)))));
                                arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((unsigned char) min(((short)(-32767 - 1)), ((short)-16))))) ? (((((_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (unsigned short)30378)))) : (min((402513844), (((/* implicit */int) (signed char)-87)))))) : (((/* implicit */int) ((((1390850440) - (((/* implicit */int) (signed char)-102)))) != (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_5])), (var_11))))))));
                                arr_25 [i_0] [i_1] [i_2] [i_5] [i_6] [i_0] = ((/* implicit */signed char) (+(((max((21), (((/* implicit */int) var_5)))) ^ (((/* implicit */int) ((((/* implicit */long long int) -402513861)) < (var_0))))))));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8678)) ? ((+(((/* implicit */int) (unsigned short)52804)))) : (((/* implicit */int) max((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_2))))))))));
                                var_15 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned short)8686))))))), (max(((~(((/* implicit */int) (signed char)92)))), (((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_7] [i_7]) : (((/* implicit */int) (unsigned short)50121))))), (((unsigned long long int) arr_33 [i_8]))));
                arr_34 [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(-1711796444)))), (min((var_6), (((/* implicit */long long int) 402513852))))))) ? (((/* implicit */int) min((arr_28 [i_7] [i_7]), ((_Bool)1)))) : (max((((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) arr_2 [i_7])))), (((/* implicit */int) arr_21 [i_7] [i_8]))))));
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 11; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) min((((/* implicit */short) arr_36 [10] [i_8] [i_9 + 1] [(_Bool)1])), (arr_20 [(unsigned char)3] [i_8] [5ULL] [i_8] [i_8] [i_8])))), (((unsigned short) var_7))))) ? ((((((_Bool)1) && (((/* implicit */_Bool) 3052327964U)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)36770)) != (((/* implicit */int) var_5)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))))))));
                                arr_43 [i_7] [i_7] [(short)9] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_2);
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-5499)), (-402513841)))) ? ((~(((/* implicit */int) (short)-32706)))) : (((int) ((_Bool) (signed char)-106)))));
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_41 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) arr_41 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_10])))) >= (var_7)));
                            }
                            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                            {
                                var_20 += ((/* implicit */signed char) var_4);
                                arr_46 [(_Bool)1] [11ULL] [i_12] [i_10] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-7742)) && (((/* implicit */_Bool) arr_18 [i_12])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */unsigned int) var_7)) : (arr_18 [i_12])))))) : (min((((/* implicit */unsigned long long int) arr_4 [i_10] [i_12])), (15620897958730318726ULL)))));
                            }
                            arr_47 [i_7] [i_8] [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)82)) ^ (arr_29 [i_10]))), ((+(((/* implicit */int) (signed char)-87))))))) && (((/* implicit */_Bool) var_7))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_6))));
                arr_48 [3LL] [i_8] [i_7] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-52))));
            }
        } 
    } 
}
