/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158210
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((var_13) != (min((((-1641200110) / (2147483647))), ((-(var_3))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) var_4);
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(min((var_14), (((/* implicit */unsigned int) var_0)))))))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (!(((((/* implicit */long long int) ((/* implicit */int) (short)32767))) <= (arr_0 [i_0 + 3]))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) var_18);
        arr_10 [i_0] = ((/* implicit */short) (+(max((min((14852143965201303493ULL), (((/* implicit */unsigned long long int) (signed char)-105)))), (((/* implicit */unsigned long long int) var_0))))));
        var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max(((~(3883161696U))), (((/* implicit */unsigned int) arr_5 [i_0 + 1]))))) > (((((((/* implicit */_Bool) -1641200110)) ? (arr_7 [i_0 - 1] [i_0] [i_0]) : (((/* implicit */long long int) var_15)))) / (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 1192252924))))))));
    }
    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((arr_24 [i_4]) - (arr_24 [i_3]))) + (((/* implicit */long long int) ((/* implicit */int) ((-2147483647) != (1192252941))))))))));
                        arr_25 [i_3] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (+(min((((/* implicit */int) arr_1 [i_5 - 2])), ((~(((/* implicit */int) (short)10342))))))));
                        var_25 = ((/* implicit */short) ((((max((((/* implicit */long long int) arr_2 [(signed char)21] [i_4])), (arr_0 [i_3]))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [2U] [i_5] [i_4] [i_3])) ? (arr_8 [i_6] [i_5 + 3] [i_4]) : (arr_18 [i_6] [i_5 + 1] [i_4] [i_3])))))) + (((/* implicit */long long int) max((arr_19 [i_3] [i_4] [i_5 - 2] [i_5 - 1]), ((~((-2147483647 - 1)))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [i_3]);
    }
    var_27 = ((/* implicit */unsigned int) max((var_27), (var_7)));
    var_28 = ((/* implicit */unsigned long long int) var_14);
}
