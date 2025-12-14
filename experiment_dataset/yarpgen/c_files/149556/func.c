/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149556
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
    var_18 = (!(((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (var_7)))), ((-(((/* implicit */int) (short)17832))))))));
    var_19 = ((/* implicit */long long int) var_14);
    var_20 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((var_13), (((/* implicit */short) (_Bool)1))))), (min((arr_1 [i_0 - 2] [i_0]), (var_8)))));
        arr_5 [i_0] = ((/* implicit */int) ((_Bool) (-(arr_2 [i_0] [i_0 + 1]))));
        arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 3920848853U)) ? (729683189U) : (3565284082U))) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (3565284107U) : (((/* implicit */unsigned int) -172895556))))) ? (min((var_11), (arr_3 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        var_21 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (3558400904U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 4) /* same iter space */
    {
        arr_11 [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_8 [i_1 - 3]))));
        arr_12 [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_1] [i_1]);
        var_22 = ((/* implicit */short) (_Bool)0);
    }
    for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_23 = (_Bool)1;
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                for (unsigned char i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_26 [12LL] [12LL] [12LL] [i_3] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_2] [i_3])) ? (arr_7 [i_3]) : (var_12))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_3 + 1] [i_3 + 1] [i_3 + 1] [8U] [i_3 + 1] [i_3])))))) > ((~(var_8)))));
                            var_24 = max((((((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_4]))))) | (((/* implicit */unsigned int) ((/* implicit */int) (short)26730))))), (((/* implicit */unsigned int) ((int) min((var_17), (((/* implicit */short) (unsigned char)214)))))));
                            arr_27 [i_6] [i_3] [i_3] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_16)), (max((12667539187956221827ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3085125462U)))))))));
                            arr_28 [i_3] [i_3] = ((/* implicit */unsigned int) var_2);
                            var_25 = ((/* implicit */short) var_4);
                        }
                    } 
                } 
            } 
            arr_29 [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 2031221719)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1033084373U) > (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (max((min((729683209U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (_Bool)1))))));
        }
        /* LoopNest 3 */
        for (signed char i_7 = 2; i_7 < 11; i_7 += 1) 
        {
            for (long long int i_8 = 1; i_8 < 12; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_37 [i_9] [6ULL] [6ULL] [i_2] |= ((int) (+(((/* implicit */int) (unsigned char)120))));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            var_26 -= ((/* implicit */signed char) max((min((((/* implicit */int) ((((/* implicit */unsigned int) var_10)) > (var_9)))), (arr_38 [i_2 - 3] [i_2] [i_2] [i_9] [i_10]))), (((/* implicit */int) ((short) arr_23 [i_9] [i_8 + 1] [i_8] [i_9] [i_8] [i_7 + 1])))));
                            arr_40 [i_8] [i_8] = arr_14 [i_7] [i_7];
                            arr_41 [i_2 - 1] [i_2 - 1] [i_8] [i_8] [i_10] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (240201680U)));
                            arr_42 [i_8] = ((/* implicit */short) ((unsigned long long int) ((3565284086U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(_Bool)1] [i_8 - 1] [i_10]))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    {
                        var_27 = ((/* implicit */short) (+((((+(1361395762U))) + (((arr_13 [i_12] [i_11]) - (3232986722U)))))));
                        var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)7)), (12667539187956221828ULL)));
                    }
                } 
            } 
        } 
    }
    var_29 *= ((/* implicit */short) var_11);
}
