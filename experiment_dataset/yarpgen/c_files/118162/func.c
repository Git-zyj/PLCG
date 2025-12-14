/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118162
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
    var_11 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_1))));
            arr_5 [(short)2] = var_10;
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 17; i_3 += 3) 
                {
                    for (short i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        {
                            var_13 = var_0;
                            var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_4 - 1] [(unsigned short)11] [5])) ? (((/* implicit */int) ((-1137877956) >= (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) -1137877956)) ? (((/* implicit */int) (unsigned short)65535)) : (-1137877962)))));
                            arr_16 [14LL] [16LL] [(signed char)18] [2U] = ((/* implicit */unsigned char) ((((1137877953) - (2119614060))) / (((/* implicit */int) var_1))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))) <= (((unsigned int) 245760LL))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_5 = 1; i_5 < 19; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_22 [13LL] [i_6] [i_6] [19LL] = ((arr_20 [(short)11] [(unsigned short)9] [20] [12] [(signed char)16] [i_5 + 2]) + (arr_20 [(signed char)1] [(short)14] [(unsigned char)5] [(unsigned short)19] [(short)17] [i_5 + 2]));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_16 += ((/* implicit */long long int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_23 [(_Bool)1] [i_5 + 1] [8LL] [i_5 - 1] [(signed char)16] [10LL] [5ULL]))));
                            arr_26 [i_6] [11LL] [15LL] [(_Bool)1] [(signed char)17] = ((/* implicit */signed char) arr_14 [(_Bool)1]);
                            arr_27 [12LL] [i_6] [9ULL] [(signed char)2] [17LL] = arr_15 [14LL] [(unsigned char)0] [i_5 + 2] [i_5 + 2] [17U];
                            arr_28 [i_6] [(_Bool)1] [(unsigned char)4] [15] [i_6] = ((/* implicit */unsigned short) ((arr_2 [i_5 + 1] [i_5 - 1]) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
                            var_17 = ((/* implicit */int) ((((/* implicit */long long int) 2140165777)) + (((arr_3 [14LL] [(signed char)7] [6LL]) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)16))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [19ULL] [i_5 + 2] [14LL] [6LL])) || ((_Bool)1)));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) min((var_20), ((+(((/* implicit */int) ((((/* implicit */int) var_3)) == (703944874))))))));
                            var_21 = ((/* implicit */signed char) (((((_Bool)0) ? (((/* implicit */int) arr_15 [(unsigned short)4] [3] [3LL] [4LL] [(signed char)12])) : (((/* implicit */int) (signed char)-119)))) * (((/* implicit */int) ((((/* implicit */_Bool) 2097151U)) || (((/* implicit */_Bool) var_1)))))));
                        }
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 2140165777)) || (((/* implicit */_Bool) (signed char)-60))))) < (((/* implicit */int) (unsigned short)3872))));
        }
        arr_35 [15LL] = ((/* implicit */signed char) ((((min((arr_3 [(short)17] [(signed char)17] [(signed char)0]), (((/* implicit */long long int) (_Bool)1)))) != (min((arr_33 [i_0]), (((/* implicit */long long int) arr_4 [(short)2] [9LL])))))) ? (min((min((arr_25 [13U] [0] [5ULL] [4LL]), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-1544))))))) : (var_2)));
    }
}
