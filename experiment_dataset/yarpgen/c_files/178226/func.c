/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178226
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (arr_1 [i_1] [i_0])));
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_0 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 3])) : (((/* implicit */int) (unsigned short)60199))));
            var_16 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1 - 1] [i_0]))));
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) var_5);
        }
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            arr_13 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) arr_2 [i_2]);
            var_17 = ((/* implicit */signed char) (unsigned short)30663);
            arr_14 [i_2] = max((arr_5 [i_0]), (((((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) | (((/* implicit */unsigned long long int) 4035090778U)))));
        }
        var_18 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0]);
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 259876517U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49675))) : (((((/* implicit */_Bool) (short)-6876)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60822))) : (13930480189195607699ULL)))))) ? (((((/* implicit */_Bool) 4960389636585943586LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) 627764909U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51972))) : (3965792574677883646ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            {
                arr_20 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_4 - 1] [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_4 + 2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 + 1] [i_4 + 1]))) : (arr_6 [i_4 - 1]))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_4 - 1] [i_4])), (11454050040570659594ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4 + 1] [(unsigned short)5]))) | (arr_19 [i_4 + 2] [i_4]))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967285U))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_7)), (var_9)));
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            for (long long int i_7 = 1; i_7 < 17; i_7 += 3) 
            {
                {
                    var_22 = max((arr_29 [i_6] [2ULL] [i_7]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_6] [i_7 + 1] [(signed char)18]))))));
                    arr_30 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (short)32157)), (arr_29 [i_6] [i_6] [i_6]))), (((/* implicit */unsigned long long int) ((unsigned char) 2431791055U)))))) ? (min((arr_29 [i_6] [i_7] [i_7 + 1]), ((~(3965792574677883663ULL))))) : ((((!(((/* implicit */_Bool) arr_24 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_5])))))) : ((-(3965792574677883646ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) arr_29 [i_6] [i_9] [i_7 + 4]);
                                var_24 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_29 [i_8] [i_7 + 4] [i_9 + 2])) ? (arr_29 [i_8] [i_7 - 1] [i_9 - 1]) : (arr_21 [i_7 + 1]))), (((/* implicit */unsigned long long int) max((arr_34 [i_9 - 1] [i_9] [i_7] [i_6] [17ULL]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_5] [i_5] [i_5] [i_5] [i_5]))))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_7 + 1] [i_6])) ? (((((arr_21 [i_5]) << (((arr_32 [14U] [i_6]) - (4249819544U))))) ^ (((/* implicit */unsigned long long int) (+(arr_26 [14U] [14U] [(unsigned short)15])))))) : (arr_29 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10]))))));
                }
            } 
        } 
    } 
    var_26 = 8621002883196048977LL;
}
