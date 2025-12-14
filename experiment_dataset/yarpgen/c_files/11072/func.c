/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11072
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((int) arr_2 [i_1] [i_1] [i_0])) * (((((/* implicit */int) (_Bool)0)) * (-1)))));
                var_11 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_3 [14] [i_1 + 2])) || (((/* implicit */_Bool) arr_1 [16U])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        var_12 = ((/* implicit */short) ((long long int) max((arr_1 [i_2]), (arr_1 [i_2]))));
        /* LoopSeq 4 */
        for (int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) max((arr_10 [i_3] [i_2 + 1] [i_2]), (min((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (arr_1 [i_2]) : (arr_1 [i_2]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36825))))))));
            var_14 = ((/* implicit */long long int) min((var_14), (arr_6 [i_2] [i_2])));
        }
        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) arr_6 [i_2 - 2] [i_2 - 2])))));
            var_16 = ((/* implicit */short) max((((/* implicit */int) arr_0 [i_2 - 2])), (((int) arr_11 [i_2] [i_2 + 1]))));
            /* LoopSeq 3 */
            for (signed char i_5 = 2; i_5 < 16; i_5 += 3) 
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)26054)))) ? (((((/* implicit */_Bool) arr_9 [6LL] [i_2] [i_4])) ? (((/* implicit */int) arr_9 [i_4] [i_2] [i_5 - 2])) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))));
                arr_16 [i_2] = ((/* implicit */unsigned short) max((arr_1 [i_2]), ((-(arr_1 [i_2])))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) 232086077303002912ULL))), (((((/* implicit */_Bool) max((-7683771386950123830LL), (((/* implicit */long long int) arr_12 [i_6] [i_6] [i_6]))))) ? (max((((/* implicit */int) arr_13 [i_2] [i_2])), (arr_5 [i_2]))) : (((/* implicit */int) ((_Bool) arr_11 [i_2] [i_2])))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2] [i_4])) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_13 [i_4] [i_4])) | (((/* implicit */int) arr_13 [i_4] [i_6]))))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_21 [i_2 - 2] [i_4] [i_2] = ((/* implicit */unsigned char) arr_3 [i_2] [i_4]);
                var_20 = ((/* implicit */long long int) ((unsigned long long int) max((((((/* implicit */_Bool) 1343710303807194845LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (6446117987710758588ULL))), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_2])))));
                arr_22 [i_4] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) max((arr_14 [i_2] [i_4] [i_4]), (((/* implicit */int) arr_18 [i_2 + 1] [i_4] [i_4] [i_4]))))), (arr_1 [i_2])));
            }
        }
        for (long long int i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
        {
            arr_25 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-24287)) ? (((/* implicit */unsigned long long int) -1212341742)) : (18011600791072046997ULL)))))) ? (max((((/* implicit */long long int) (unsigned short)58682)), (((arr_1 [i_2]) / (((/* implicit */long long int) 1566688409)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -725956475726801515LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-104)))))))));
            arr_26 [i_2] [i_2] [i_2] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) 255)), (arr_17 [i_2 - 1] [i_2 + 1]))), (arr_17 [i_8] [i_8])));
            var_21 = ((/* implicit */long long int) arr_0 [i_2]);
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                arr_29 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_27 [(signed char)1] [i_2] [i_9] [i_9]))) ? (((/* implicit */long long int) ((arr_0 [i_2 - 1]) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) arr_0 [i_2 + 1]))))) : (((((/* implicit */_Bool) arr_28 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_28 [i_2])))));
                var_22 = max((((((/* implicit */_Bool) arr_28 [i_2])) ? (arr_28 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 - 1]))))), (max((arr_28 [i_2]), (arr_28 [i_2]))));
                arr_30 [i_2] [i_8] [i_9] [(short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_8 [i_2] [i_2 - 2] [i_9]), (arr_8 [i_2] [i_2 - 1] [i_2])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10950))) / (8791809675606564228ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 765750966U)) ? (511503865) : (((/* implicit */int) (_Bool)1)))))));
                var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) arr_23 [i_2 - 2] [i_9]))), (((((/* implicit */_Bool) min((arr_5 [i_2]), (((/* implicit */int) (short)-18292))))) ? (((/* implicit */unsigned long long int) ((arr_19 [i_2] [i_2] [i_8] [i_8]) ? (((/* implicit */int) (signed char)-64)) : (arr_14 [i_2] [i_8] [i_9])))) : (arr_17 [i_2 + 1] [i_8])))));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    arr_34 [i_2] [i_8] [3LL] [i_2] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-52)) / (arr_24 [i_2 - 2] [i_2 - 2] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) max((arr_1 [i_2]), (((/* implicit */long long int) arr_5 [i_2]))))) : ((~(15955477379181994094ULL)))));
                    var_24 -= ((/* implicit */unsigned int) arr_20 [(_Bool)1] [i_2 - 2] [i_2 - 2] [i_2]);
                }
            }
            for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                var_25 = ((/* implicit */long long int) ((int) (_Bool)1));
                arr_37 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((signed char) min((((/* implicit */long long int) (signed char)-58)), (9223372036854775807LL))));
                var_26 = ((/* implicit */unsigned short) 7004880995984698549LL);
            }
        }
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            var_27 = min((((((/* implicit */_Bool) arr_11 [i_2] [i_12 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_12 + 1] [i_2 - 2]))) : (2441580950892189366LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 435143282637504618ULL)) ? (arr_24 [i_2] [i_12 + 1] [i_2 - 2]) : (((/* implicit */int) arr_11 [i_2] [i_12 + 1]))))));
            arr_40 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_2 - 1] [i_2 + 1] [i_12 + 1]), (arr_10 [i_2 - 1] [i_2 - 2] [i_12 + 1])))) ? (((arr_10 [i_2 - 1] [i_2 - 2] [i_12 + 1]) ^ (arr_10 [i_2 - 1] [i_2 - 1] [i_12 + 1]))) : (((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 + 1] [i_12 + 1])) ? (arr_10 [i_2 - 1] [i_2 - 1] [i_12 + 1]) : (arr_10 [i_2 - 1] [i_2 + 1] [i_12 + 1])))));
        }
        var_28 = ((/* implicit */int) (~(((long long int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2])))))));
    }
}
