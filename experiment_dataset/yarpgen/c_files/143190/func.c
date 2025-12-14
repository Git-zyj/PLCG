/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143190
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_14 = ((((/* implicit */int) (unsigned short)42614)) | (((/* implicit */int) (short)-14412)));
                            arr_9 [i_0] [i_0] [i_0] [i_3] |= ((/* implicit */short) (+(min((max((((/* implicit */int) (unsigned short)1855)), (var_8))), (((/* implicit */int) (unsigned short)58045))))));
                            var_15 -= ((long long int) ((max((arr_5 [7LL] [7LL] [i_2] [7LL]), (((/* implicit */int) var_3)))) >> (((min((var_11), (((/* implicit */long long int) (unsigned short)58045)))) + (6080435686140473602LL)))));
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)4)) ^ (var_10)))))) + (min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)46170))))), (arr_6 [i_0] [i_2 + 1] [i_3])))));
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-4)), ((unsigned short)7491)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_1))))) : ((+(((unsigned int) (unsigned short)9857))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                            {
                                var_17 = ((/* implicit */short) var_4);
                                var_18 = ((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_1 + 1]);
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) 9223372036854775807LL))));
                                var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                                arr_15 [i_2] [i_3] [i_3] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [5U] [i_0]);
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                            {
                                var_21 -= ((/* implicit */signed char) var_12);
                                var_22 = ((/* implicit */_Bool) ((unsigned int) ((((var_6) >> (((((/* implicit */int) var_1)) - (23321))))) >> (((((/* implicit */int) arr_2 [i_1 - 1] [(short)10])) - (230))))));
                                var_23 += ((/* implicit */unsigned short) var_9);
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                            {
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((long long int) -5178559346746103116LL)))));
                                var_25 = (-((~(0U))));
                            }
                            var_26 = ((/* implicit */long long int) max((var_26), (var_7)));
                        }
                    } 
                } 
                arr_24 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */long long int) min((4294967278U), (((/* implicit */unsigned int) (signed char)4))))) : (arr_0 [i_1 - 2] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)36032), ((unsigned short)26951))))) : (max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((((var_2) + (2147483647))) >> (((/* implicit */int) var_12)))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) var_9))));
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_12))));
}
