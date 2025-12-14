/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119042
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_0]) <= (arr_0 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)41715))));
        arr_5 [i_0] = ((/* implicit */short) ((long long int) arr_1 [i_0]));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || ((!((!(((/* implicit */_Bool) var_9))))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
        {
            arr_12 [i_2] = ((/* implicit */_Bool) 2147483647);
            arr_13 [i_2] = ((/* implicit */unsigned int) var_3);
            arr_14 [i_2] = ((/* implicit */short) max((-39814588), (((/* implicit */int) var_7))));
        }
        for (long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        {
                            arr_25 [i_1] [i_3] [i_4] [i_3] [(unsigned short)13] [i_4] = ((/* implicit */signed char) var_8);
                            arr_26 [i_4] = ((/* implicit */int) (((~(((int) -4108097912748742426LL)))) <= (((/* implicit */int) var_14))));
                            arr_27 [i_3] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                            arr_28 [i_1] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */short) ((_Bool) var_9));
                        }
                    } 
                } 
            } 
            arr_29 [i_3] = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned int) arr_15 [i_3] [i_1] [i_1])), (((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11))))));
        }
        arr_30 [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) (unsigned char)255))))) ^ (((/* implicit */int) min((((/* implicit */short) var_3)), (var_10))))))));
        arr_31 [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -5)) || (var_3)))) == (((/* implicit */int) (signed char)-126))))), (((((/* implicit */int) (signed char)61)) & (((((/* implicit */int) (unsigned short)23820)) << (((((/* implicit */int) var_4)) - (137)))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_34 [i_7] = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (arr_10 [i_7]))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_11 [i_7])), (arr_18 [i_7] [2LL] [i_7]))))))) * (((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)0)))) * (((var_13) * (((/* implicit */int) (_Bool)0)))))))));
        arr_35 [(unsigned short)4] [i_7] = ((/* implicit */int) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (2147483647) : (var_5)))) % (arr_10 [i_7]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)41)))))));
        arr_36 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)28570)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-62)) <= (-651333118)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (_Bool)1)))))));
    }
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (((((((/* implicit */_Bool) 511LL)) && (((/* implicit */_Bool) var_8)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)52))))))));
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
    var_17 = ((/* implicit */_Bool) var_4);
}
