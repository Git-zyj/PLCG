/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135838
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
    var_18 = ((/* implicit */unsigned short) var_1);
    var_19 = ((/* implicit */signed char) max(((-(((/* implicit */int) ((unsigned short) (signed char)79))))), (((/* implicit */int) var_6))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_20 += ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))))));
        arr_2 [1U] = ((/* implicit */unsigned int) ((((unsigned long long int) (unsigned char)214)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_4))) : (((/* implicit */long long int) ((unsigned int) var_15))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_21 += ((/* implicit */int) (short)609);
        arr_6 [i_1] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-11)), ((unsigned short)18565)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (-2150182444297152450LL))))) : (arr_3 [i_1]))));
        arr_7 [i_1] [5LL] = ((/* implicit */_Bool) ((unsigned short) 1287988855U));
        var_22 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [8LL]))));
    }
    for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25))) != (1287988855U))))))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_11 [i_2 + 1])))) ? (((/* implicit */long long int) 1287988855U)) : (((long long int) var_10))));
        arr_12 [i_2] = ((((/* implicit */_Bool) -3126637250957300847LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (1349897394812894738LL));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_25 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_14)), (min((((/* implicit */unsigned long long int) var_17)), (arr_4 [i_3])))));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3006978441U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [13LL]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_9 [i_3]))))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    arr_24 [i_3] = ((/* implicit */signed char) max((((long long int) arr_13 [i_5] [i_4])), (((72057594037927935LL) | (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))) | (3006978440U))))))));
                    arr_25 [i_3] [i_3] [i_5] [i_4] = ((/* implicit */signed char) ((unsigned long long int) (_Bool)0));
                }
            } 
        } 
    }
    var_27 = ((-1349897394812894735LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_15)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))))));
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_40 [(short)7] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1287988855U)))))));
                                arr_41 [17LL] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -1220584467)) ? (1287988855U) : (3480917736U))), (((var_1) ? (((/* implicit */unsigned int) ((0) ^ (((/* implicit */int) var_13))))) : (arr_38 [i_6] [i_6] [(unsigned char)17] [(unsigned char)17] [i_6] [6LL] [(signed char)9])))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((int) var_4)), (((/* implicit */int) arr_47 [13U] [i_11] [i_11] [i_11 + 1])))))));
                            arr_49 [i_12] [i_11] [i_11] [i_6] = ((/* implicit */short) ((signed char) 3006978440U));
                            var_30 -= ((/* implicit */unsigned int) arr_47 [i_6] [i_7] [i_6] [(signed char)18]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 18; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (_Bool)1))));
                            arr_55 [(_Bool)0] [i_13] [(_Bool)0] [(short)17] [i_7] = ((/* implicit */int) (signed char)-8);
                            arr_56 [i_13] = ((/* implicit */_Bool) var_10);
                        }
                    } 
                } 
                arr_57 [i_6] |= ((/* implicit */signed char) (_Bool)0);
            }
        } 
    } 
}
