/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17318
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 |= ((/* implicit */short) var_12);
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)16)) - (((/* implicit */int) (unsigned char)51))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [7] [i_2] [i_0] [7] = ((/* implicit */unsigned char) max((((unsigned long long int) 2335958723983236830ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3 - 2] [(short)14])) ? (((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_1 [i_3 + 4] [i_3])))))));
                                var_19 += ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_1] [(signed char)10] [i_3] [i_3 + 4] [(unsigned char)4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) arr_14 [i_5]))))) == ((~(2120394688U)))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */signed char) (short)0);
                        var_22 = (-(((/* implicit */int) var_9)));
                        arr_25 [i_5] [i_6] [i_7] [i_7] [i_7] = ((/* implicit */int) arr_9 [i_5] [i_6] [i_7] [7] [i_7] [i_7] [i_7]);
                    }
                    var_23 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                    var_24 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_1 [i_7] [i_6])))) || (((2335958723983236830ULL) > (((/* implicit */unsigned long long int) 47886643))))));
                    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2335958723983236830ULL))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((int) var_16))) ? (((/* implicit */long long int) ((arr_26 [(_Bool)1] [i_9 + 1] [i_5]) ^ (((/* implicit */int) arr_14 [14]))))) : ((~(arr_23 [i_5] [8ULL] [8ULL] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_9 - 1] [i_5])))));
                    var_27 = ((/* implicit */unsigned long long int) ((short) (~(arr_24 [i_9 + 2] [i_5]))));
                    var_28 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)25))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2335958723983236830ULL))))) > (((/* implicit */int) (!(((/* implicit */_Bool) -148339951)))))))) - (((/* implicit */int) var_7))));
}
