/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119331
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
    var_11 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)178))))));
    var_12 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
    var_13 = ((/* implicit */unsigned long long int) (~((~((-(((/* implicit */int) (unsigned char)85))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_2 [i_1])))));
                var_15 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [16U] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_0] [i_0] [4ULL])))) : (((((arr_2 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)42)) - (42))))))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_2);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) /* same iter space */
                    {
                        arr_10 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0]))))))));
                        arr_11 [i_0] [i_1] [i_1 + 2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)178)) ? (9180939398201545017LL) : (-9180939398201545017LL)))) && (((/* implicit */_Bool) (~(var_6))))))), ((((!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_1 [i_2]))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_4] [16LL] = ((/* implicit */long long int) ((unsigned char) arr_2 [(signed char)1]));
                        var_16 = arr_8 [i_0] [i_1] [i_1] [i_2] [i_4];
                        var_17 += ((/* implicit */signed char) var_5);
                        var_18 = ((/* implicit */unsigned char) var_2);
                    }
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((/* implicit */long long int) ((unsigned char) min((arr_5 [(short)11] [i_2] [i_5]), (((/* implicit */unsigned long long int) (_Bool)0)))))), (max((((((/* implicit */_Bool) arr_0 [i_5])) ? (-5991075714953784174LL) : (9180939398201545010LL))), (((/* implicit */long long int) max((arr_17 [(short)18] [i_2] [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) var_0))))))))))));
                        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_5]))) % (((((min((((/* implicit */long long int) var_4)), (-9180939398201545017LL))) + (9223372036854775807LL))) << (((/* implicit */int) var_9))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((short) max((max((((/* implicit */int) arr_9 [i_1] [i_1])), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((~(((/* implicit */int) var_4)))))));
                                arr_22 [i_0] [i_6] [i_6] [i_6] [i_6] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) 9180939398201545017LL)))));
                                var_22 = ((/* implicit */unsigned char) arr_14 [i_1] [i_2] [i_6] [i_7]);
                                arr_23 [i_1] [i_6] [i_1] = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned int) (+(arr_20 [i_0] [i_0] [i_0] [i_0] [5])))) <= (arr_17 [i_0] [i_0] [i_0] [i_6] [i_6]))));
                            }
                        } 
                    } 
                }
                arr_24 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) max((arr_9 [i_0] [i_1]), ((signed char)-66)))))));
            }
        } 
    } 
}
