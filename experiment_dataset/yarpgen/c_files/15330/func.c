/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15330
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
    var_11 = ((((/* implicit */_Bool) (short)-1325)) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)1318)), ((unsigned short)40647)))));
    var_12 = ((/* implicit */unsigned int) (signed char)-73);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_4 [i_2 - 1] [i_2 - 3] [i_2 + 1] [i_2 - 1]) ? (((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 3] [i_2] [i_2 + 2])) : (((/* implicit */int) (_Bool)1))))), (min((6646664966375591919ULL), (((/* implicit */unsigned long long int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 1]))))));
                    arr_9 [i_0] [i_0] [i_2 - 2] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1237605854U)))) * (((((/* implicit */_Bool) 6646664966375591898ULL)) ? (((arr_7 [i_0] [i_1] [i_2] [i_2 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2 + 1]))) : (7650438078056404591LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 1152921504606846975LL))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_3 - 1] [i_2] [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 - 2] [i_1] [i_3 - 1] [i_4 + 1])) <= (((/* implicit */int) (signed char)46))))) <= (((/* implicit */int) arr_7 [i_2 + 1] [i_1] [i_3 - 1] [i_4 + 1])));
                                arr_15 [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)6]);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((68719476734ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2 + 2])))))) ? (((/* implicit */unsigned long long int) -2938296658094284180LL)) : (var_0)))))));
                    arr_16 [(unsigned char)7] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1340)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)40647))));
                }
            } 
        } 
        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_0])), (arr_1 [i_0])))) : (((/* implicit */int) (unsigned short)40647))))));
        arr_17 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            var_15 ^= (signed char)72;
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 2; i_7 < 12; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 17171936154015485246ULL)) || (((((/* implicit */_Bool) ((((/* implicit */int) (short)-1315)) | (((/* implicit */int) arr_13 [i_0] [i_5] [i_6] [i_7] [i_5]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 848768590802888646LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_5] [i_6] [i_8]);
                            arr_30 [i_0] [i_5] [(short)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_6] [i_6] [i_7 + 2]))) | (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1320))) : (arr_5 [i_8] [i_7] [i_0])))))) ? (((((/* implicit */_Bool) -7062471448314005378LL)) ? (2034861647U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1339))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56)))));
                        }
                    } 
                } 
            } 
            arr_31 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [(short)3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0] [i_5])))) : (((unsigned long long int) arr_26 [i_0] [i_0] [i_5] [i_5] [i_5])));
            arr_32 [i_0] [i_5] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)105))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) : (8589934591ULL))));
        }
    }
    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
    {
        arr_35 [i_9] = ((/* implicit */long long int) 67108863U);
        var_17 = ((/* implicit */_Bool) (signed char)63);
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_24 [i_9] [i_9]);
        arr_37 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_9] [4ULL] [i_9] [i_9] [i_9])) ? (((/* implicit */int) (short)-1335)) : (((/* implicit */int) (short)254))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_20 [i_9])))) : (((arr_20 [i_9]) & (arr_20 [i_9])))));
        arr_38 [i_9] [i_9] = ((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) arr_34 [i_9] [i_9])) && (((/* implicit */_Bool) 18441936804046573492ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-1)))) : (((((/* implicit */_Bool) (short)-1340)) ? (arr_25 [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_9]))))))));
    }
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)1536)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-8354))))) ^ (((/* implicit */long long int) -1875673087))));
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_5))));
}
