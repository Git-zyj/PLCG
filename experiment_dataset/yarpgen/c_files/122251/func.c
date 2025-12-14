/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122251
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
    var_10 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_9))))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) min((((/* implicit */int) (short)514)), (var_0))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (short)31218))))), (max((((/* implicit */long long int) var_1)), (-3200512309204493239LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_8)))))))));
    var_12 = ((/* implicit */unsigned short) ((short) var_9));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((min(((+(2621892148380320588LL))), (((((/* implicit */_Bool) (short)-31218)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20077))) : (-2621892148380320589LL))))) >> (((((((/* implicit */int) ((unsigned short) var_8))) + (((/* implicit */int) arr_0 [i_0])))) - (29968)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31218))) + (var_9))))) >> (((var_5) - (1388038350)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_13 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((int) (short)-514))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15887))) : (2621892148380320578LL))));
                                arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max(((~(arr_10 [i_4] [i_4] [i_2 + 2] [i_3 - 1] [(short)11] [21LL]))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3])) ? (((/* implicit */int) (short)15887)) : (((/* implicit */int) arr_14 [i_3] [i_3])))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min(((short)533), (arr_12 [i_2 - 2] [i_2 + 1])));
                }
            } 
        } 
        var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))) == (((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_3))))) >> (((var_9) - (2255552219999564399ULL)))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        arr_19 [i_5] = ((/* implicit */short) var_5);
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-515)) || (((/* implicit */_Bool) (short)-15874))))) : ((+(((/* implicit */int) arr_17 [i_5]))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))));
        arr_21 [i_5] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_17 [i_5]))))));
    }
}
