/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132822
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
    var_17 = ((/* implicit */short) max((((/* implicit */long long int) var_3)), (min((((/* implicit */long long int) var_10)), (-7769220493669259483LL)))));
    var_18 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) max((((((((/* implicit */unsigned long long int) var_7)) == (8589934591ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) var_6))))) : (1073741823))), (((/* implicit */int) (short)-26850))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (((((/* implicit */int) max((((/* implicit */unsigned short) (short)26849)), ((unsigned short)32033)))) - (((int) -7769220493669259473LL))))));
            arr_5 [(short)18] [(short)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483624)) ? (((/* implicit */int) (short)13337)) : (1073741823)));
        }
        for (short i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_1 [i_0])), (min((((/* implicit */long long int) (short)21179)), (7372653950936564827LL))))) <= (((/* implicit */long long int) 1073741823))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) max((var_7), (((/* implicit */int) arr_8 [i_0] [i_2] [i_2]))))) - (((((/* implicit */long long int) ((/* implicit */int) (short)-4739))) % (-7769220493669259471LL))))) <= (5191946272113823142LL)));
            arr_10 [i_0] = ((unsigned short) (+(7769220493669259471LL)));
        }
        for (short i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] = ((/* implicit */int) max((((long long int) ((((/* implicit */int) (short)-13338)) != (((/* implicit */int) arr_12 [(short)5] [i_3] [i_3]))))), (((/* implicit */long long int) (unsigned short)4025))));
            var_22 = ((/* implicit */short) min((arr_6 [8] [8] [i_3]), (((/* implicit */unsigned short) ((max((((/* implicit */int) var_0)), (-2147483625))) > (((/* implicit */int) ((short) -683720342998230891LL))))))));
            var_23 = ((/* implicit */_Bool) arr_4 [i_3]);
        }
        for (short i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_11))));
            /* LoopNest 3 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            arr_28 [(unsigned short)23] [i_5] = ((/* implicit */signed char) (short)21082);
                            var_25 = ((/* implicit */long long int) 2147483624);
                        }
                    } 
                } 
            } 
            var_26 &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_23 [i_0] [i_4] [4] [i_0])) >> (((((/* implicit */int) arr_23 [i_0] [i_0] [(unsigned short)6] [(unsigned short)6])) - (15825))))) | (((/* implicit */int) min((arr_23 [i_0] [(unsigned short)12] [(_Bool)1] [i_4]), (arr_23 [2LL] [i_4] [(_Bool)1] [(_Bool)1]))))));
            var_27 = ((/* implicit */unsigned short) var_14);
        }
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) max((min((((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (short)21082))) : (-7769220493669259478LL))), (((/* implicit */long long int) (short)-2785)))), (((/* implicit */long long int) ((int) max((var_8), (((/* implicit */unsigned short) (_Bool)0)))))))))));
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_11);
    }
}
