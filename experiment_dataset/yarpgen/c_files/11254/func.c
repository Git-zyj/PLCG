/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11254
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_13 = ((/* implicit */short) (~(var_12)));
            arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)60);
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2] [i_1])))))));
            arr_6 [i_1] = 17447194165279818476ULL;
        }
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (arr_3 [i_0 + 4] [i_0 + 4] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 4])))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)167)) / (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) (_Bool)1))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 507520687U)) ? (5882163063711498644LL) : (4347404306720259142LL)));
    }
    for (signed char i_2 = 3; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            arr_13 [i_2] [i_3] = ((/* implicit */unsigned int) arr_7 [i_2] [i_3]);
            arr_14 [i_2] [i_3] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) (_Bool)1)), (var_0)))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 2) 
        {
            var_17 += ((short) (+(1023649928)));
            /* LoopSeq 2 */
            for (short i_5 = 2; i_5 < 23; i_5 += 4) /* same iter space */
            {
                var_18 = ((/* implicit */long long int) ((unsigned long long int) var_11));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4])))));
            }
            for (short i_6 = 2; i_6 < 23; i_6 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */_Bool) ((unsigned short) ((560565010U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45217))))));
                arr_21 [i_6] [i_4] [i_2] [i_2] &= ((/* implicit */long long int) (signed char)98);
            }
        }
        var_21 = ((/* implicit */unsigned short) ((long long int) ((arr_20 [i_2 - 3] [i_2]) || (((/* implicit */_Bool) arr_18 [i_2] [i_2 + 1] [i_2 + 2])))));
        arr_22 [i_2] = ((/* implicit */short) 7147762345372136915ULL);
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(7147762345372136915ULL))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_23 += ((/* implicit */_Bool) (short)5919);
        var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_7]))))) * (((((0ULL) > (14651339202651695160ULL))) ? (((/* implicit */int) ((((/* implicit */int) (short)27716)) > (((/* implicit */int) (unsigned char)241))))) : (((/* implicit */int) ((2406364231116482082ULL) > (7147762345372136937ULL)))))));
        var_25 = (~(arr_12 [i_7] [(unsigned char)20]));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_23 [i_8]))));
        arr_28 [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)24))));
    }
    var_27 = ((/* implicit */long long int) (_Bool)1);
}
