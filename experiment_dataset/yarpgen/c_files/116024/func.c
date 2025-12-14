/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116024
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)62459)) ? (((/* implicit */int) (unsigned short)7689)) : (((/* implicit */int) (unsigned short)40308)))) + (((/* implicit */int) (signed char)12))))) ^ (((unsigned long long int) ((signed char) arr_1 [i_0 + 1])))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)25223)) - (((/* implicit */int) (signed char)-22))))), (((((/* implicit */_Bool) (unsigned short)25220)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_0 [i_0])))))) ? (((long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) (unsigned short)7811)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) max((var_6), ((unsigned short)51095))))) + (max((arr_0 [i_0]), (((/* implicit */long long int) (signed char)-12))))))));
    }
    for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1] [i_1] [i_1 - 2]))))), ((+(((/* implicit */int) (unsigned char)225)))))))))));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_9 [i_1 + 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)7811)) > (-1))))) : (((((arr_6 [i_1 - 2] [i_3 + 3]) + (9223372036854775807LL))) << (((6218915981259048204LL) - (6218915981259048204LL)))))));
                    arr_14 [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((long long int) 429654858)) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))))))) ? (((arr_7 [i_3 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (short)-16233))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_2]))))))))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        var_15 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), (max((max((arr_9 [i_3]), (6760250548128206729LL))), (var_3))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((short) (_Bool)1)))));
                        arr_18 [i_1] [i_2] [i_2] [i_3 - 1] [(signed char)6] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)40315))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)18))))))) : (((((((/* implicit */_Bool) 2425001779U)) ? (3553701523U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))))));
                        arr_19 [i_3] [i_4 - 1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)40)) ? (((unsigned long long int) arr_10 [i_2] [i_3] [i_4 + 2])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_6 [i_4] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))) || (((/* implicit */_Bool) max((((int) arr_0 [i_3])), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)72)) && (((/* implicit */_Bool) arr_6 [i_1] [i_2]))))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_17 = ((((((/* implicit */_Bool) ((long long int) (unsigned short)30283))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_11))))) : ((~(((/* implicit */int) (unsigned short)40296)))))) | (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)31533)))));
                        var_18 = ((/* implicit */_Bool) (((((-(((/* implicit */int) arr_21 [i_1] [i_3 - 2] [i_5])))) + (2147483647))) >> (((((/* implicit */_Bool) (+(2095975409596678267ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) -583666932)) != (2425001753U)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)37352))))))));
                        var_19 = ((unsigned short) ((((_Bool) 2095975409596678263ULL)) ? (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (_Bool)1)) : (1528402606))) : ((~(-1918243464)))));
                    }
                }
            } 
        } 
        arr_22 [i_1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-92))))) ? (((((/* implicit */_Bool) arr_13 [(short)12] [11LL] [(unsigned char)0] [i_1])) ? (-1LL) : (((/* implicit */long long int) 3553701523U)))) : (((((/* implicit */long long int) 741265772U)) - (1442459235070180806LL)))))) ? (((((/* implicit */unsigned long long int) ((var_5) + (var_10)))) - (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (1059187517) : (-1528402606)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-64)) + (((/* implicit */int) (unsigned char)119))))) : (((((/* implicit */_Bool) 14107144322327368273ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64009))) : (var_3))))))));
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-31248))))) / (((/* implicit */int) (unsigned char)248))))) ? (((((((/* implicit */_Bool) (unsigned short)15328)) && (((/* implicit */_Bool) -1)))) ? (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */unsigned long long int) 2521298612605182821LL)) : (16350768664112873349ULL))) : (((/* implicit */unsigned long long int) -1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
