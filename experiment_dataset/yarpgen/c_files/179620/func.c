/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179620
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) ((((/* implicit */_Bool) -8455597984011925514LL)) && (((/* implicit */_Bool) var_2))))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)195)) : (var_0))))), (((arr_1 [i_0] [i_0]) + (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 18; i_1 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned int) ((((arr_0 [i_1 + 3] [i_1 + 2]) ? (min((10564822163698361860ULL), (((/* implicit */unsigned long long int) (unsigned char)46)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (8455597984011925514LL) : (8455597984011925514LL)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58)))));
            arr_7 [i_1] = ((/* implicit */unsigned int) ((int) arr_3 [i_0] [i_0] [i_1]));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned char)221))));
        }
        for (short i_2 = 2; i_2 < 18; i_2 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10564822163698361860ULL)) ? (((/* implicit */unsigned long long int) arr_6 [i_2])) : (arr_8 [i_2] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (8455597984011925533LL)))) ? ((~(((/* implicit */int) ((unsigned short) 10564822163698361873ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7881921910011189725ULL)))))));
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((arr_1 [i_0] [i_0]) / (arr_4 [i_0])))))) ? (7881921910011189734ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23605)) ? (10564822163698361882ULL) : (((/* implicit */unsigned long long int) 8455597984011925506LL))));
                            var_18 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 2165876U)) ? (8455597984011925529LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_4]))))) >> (((var_0) - (1651048579))))) != (((/* implicit */long long int) arr_4 [i_3]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_23 [i_0] [i_2] [(signed char)14] [(signed char)14] [i_3] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))) : (max((arr_17 [i_0] [i_0] [i_3] [i_4] [i_6]), (((/* implicit */unsigned int) var_10))))))), (var_12)));
                            var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_12)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 7881921910011189731ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36342))) : (12265049520342942022ULL))))))), (((((((/* implicit */unsigned int) arr_1 [i_4] [i_6])) * (arr_17 [i_6] [i_4] [i_3] [i_2] [i_0]))) & (((var_13) & (((/* implicit */unsigned int) arr_13 [i_6] [i_4] [i_3] [i_4]))))))));
                            var_20 = arr_17 [i_2 + 2] [i_2 + 3] [i_2 - 1] [i_2] [i_2 - 1];
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 2) 
                        {
                            arr_27 [i_0] [i_2] [i_3] [i_2] [i_7] = ((/* implicit */long long int) 10564822163698361860ULL);
                            var_21 = ((/* implicit */signed char) arr_21 [i_7 - 2] [i_2] [i_2] [i_3] [i_3] [i_4]);
                        }
                        var_22 = ((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_2] [i_4] [i_2]);
                    }
                } 
            } 
        }
    }
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)36342)) ? (10564822163698361889ULL) : (((/* implicit */unsigned long long int) 1475553675))));
    var_24 = ((/* implicit */short) var_10);
}
