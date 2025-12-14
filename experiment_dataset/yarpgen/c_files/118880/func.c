/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118880
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((_Bool) (_Bool)0));
        var_11 = ((unsigned char) (_Bool)1);
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 19; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned char) ((unsigned long long int) arr_6 [i_1 - 2] [i_1]));
            arr_7 [i_1] [i_1 - 2] = ((/* implicit */signed char) 8321499136ULL);
        }
        for (short i_2 = 2; i_2 < 19; i_2 += 1) /* same iter space */
        {
            var_13 -= ((/* implicit */short) ((long long int) ((int) (unsigned short)0)));
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_18 [i_2] [i_4] [i_3 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -1530347373842332464LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_0]))))));
                            arr_19 [i_0] [i_0] [i_2 - 2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) ((_Bool) 1530347373842332464LL));
                            arr_20 [i_5] [i_3] [i_4] &= ((/* implicit */unsigned short) ((arr_12 [i_0]) ? (arr_5 [i_2 + 1]) : (arr_5 [i_2])));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_15 [i_0] [i_3 + 1] [i_3] [i_4]))))));
                            var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                            arr_23 [(short)2] [i_0] &= (-(((/* implicit */int) (_Bool)0)));
                            arr_24 [i_0] [(_Bool)1] [i_0] [i_4] [i_2] = ((/* implicit */short) (+(arr_17 [i_2 - 2] [14LL] [i_3 + 1])));
                            arr_25 [i_0] [i_2] [i_3 - 1] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (8466202301964357902LL) : (((/* implicit */long long int) arr_1 [i_4]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-32764)) / (((/* implicit */int) var_6))))) : (1530347373842332440LL)));
                        }
                        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            arr_29 [i_0] [i_2] [i_3] [i_2] [i_7] = ((/* implicit */_Bool) ((((unsigned long long int) var_6)) << (((/* implicit */int) (!(var_5))))));
                            var_16 *= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_7])) ? (arr_8 [i_0]) : (((/* implicit */int) var_10)))));
                            var_17 *= ((/* implicit */long long int) var_10);
                            var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 1530081637U)))) ? (((/* implicit */int) arr_16 [i_2] [i_2 + 1] [3U] [i_3 - 2])) : (((/* implicit */int) var_3))));
                        }
                        var_19 -= ((_Bool) arr_17 [i_4] [i_2] [i_4]);
                        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_2 - 1])) : (((/* implicit */int) var_10))));
                        arr_30 [i_2] [i_2 - 2] = ((/* implicit */int) ((unsigned int) -1530347373842332457LL));
                        var_21 = ((/* implicit */int) ((_Bool) arr_17 [i_0] [i_2] [i_3 - 1]));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) arr_14 [6U] [14U] [i_0] [i_0])))));
        arr_31 [i_0] [i_0] &= ((/* implicit */unsigned int) ((_Bool) 0ULL));
    }
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
    {
        arr_35 [i_8] = (unsigned short)3474;
        var_23 += ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_8] [i_8] [i_8])) + (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_9))))))));
        var_24 = ((/* implicit */long long int) (_Bool)1);
    }
    var_25 = ((/* implicit */unsigned char) var_0);
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))));
}
