/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108091
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
    var_13 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 *= ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) >> (((arr_2 [i_0]) + (6670149377156272262LL))))));
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-28323))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_16 = ((/* implicit */signed char) min((max((min((((/* implicit */unsigned int) (unsigned char)121)), (2703621782U))), (((/* implicit */unsigned int) (unsigned short)52574)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-5)), ((unsigned short)31539))))));
        var_17 *= ((/* implicit */short) max((min((((/* implicit */int) (short)8191)), ((-(((/* implicit */int) arr_3 [13LL])))))), (((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) arr_3 [i_1]))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) /* same iter space */
        {
            arr_8 [i_1] [(unsigned short)6] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_5 [(short)2] [1]), (max((((/* implicit */long long int) (_Bool)1)), (-7853722283661114555LL)))))) || ((!(((/* implicit */_Bool) 1261147465U))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((arr_7 [i_2 - 1]) * (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2 - 1] [i_2 - 1]))))))));
                arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) arr_6 [i_2 + 2]);
            }
        }
        /* vectorizable */
        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) /* same iter space */
        {
            var_19 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)52574))));
            var_20 -= ((/* implicit */int) (unsigned char)125);
        }
    }
    var_21 = ((/* implicit */long long int) min((var_3), (((/* implicit */unsigned char) (((+(6116216579527671411LL))) < (((/* implicit */long long int) (~(((/* implicit */int) var_8))))))))));
}
