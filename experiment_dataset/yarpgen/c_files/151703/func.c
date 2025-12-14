/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151703
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((long long int) min((13011688478920228505ULL), (((/* implicit */unsigned long long int) arr_0 [i_1])))));
                var_12 = (+(min(((+(13086975158467073716ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-32761)), (var_9)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) 13011688478920228505ULL);
                    arr_15 [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -7203614193094705172LL)) ? (((/* implicit */unsigned long long int) 398730798U)) : (13086975158467073714ULL)))) ? (((/* implicit */int) (unsigned short)43842)) : (((/* implicit */int) ((unsigned short) var_5))))) << (((/* implicit */int) ((((/* implicit */int) min(((unsigned short)63769), ((unsigned short)43842)))) <= (((/* implicit */int) ((short) 11868395742781446769ULL))))))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-14765)), (18446744073709551591ULL)))) ? (13011688478920228505ULL) : (((((/* implicit */_Bool) arr_11 [i_2] [i_3])) ? (15055043578499593773ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21693)))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) arr_0 [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 398730783U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18520))) : (398730806U)))) : (min((((/* implicit */unsigned long long int) (unsigned short)29137)), (3391700495209957843ULL))))))));
                    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((short) arr_14 [i_3 + 1] [i_3] [i_2 - 2]))), ((+(arr_9 [i_2 - 2] [i_3] [i_3 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        for (short i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_22 [i_2 - 1] [i_2 - 1] [i_3] [i_4] [11ULL] [(short)13] [i_2 - 1] = ((/* implicit */short) var_2);
                                var_16 = 14535117500109700694ULL;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((6624690801438964089ULL) << (((((/* implicit */int) (short)18520)) - (18469)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46837))) : (min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40775))) / (-4053977630837139831LL))))))));
    var_18 = ((/* implicit */unsigned long long int) ((14535117500109700694ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_4)))))));
}
