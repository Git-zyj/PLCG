/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174828
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (unsigned char)235))));
                        arr_11 [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) 14U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) : (3857783563U)))))) ? (((/* implicit */unsigned int) ((max(((_Bool)1), (arr_7 [i_0]))) ? (((/* implicit */int) (short)-7389)) : ((+(((/* implicit */int) (short)-7389))))))) : (arr_8 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 2])));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(arr_9 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) arr_7 [i_3])) : (((((((((/* implicit */int) arr_10 [(_Bool)1])) - (((/* implicit */int) (unsigned short)28579)))) + (2147483647))) >> (((arr_6 [i_3 + 1] [i_1 + 1] [i_2]) + (9086825495304938803LL))))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), (((unsigned long long int) max((((/* implicit */unsigned int) var_12)), (var_10))))));
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_19 ^= max((((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) arr_2 [i_4]))))) : ((+(((/* implicit */int) (short)-2722)))))), ((+(((/* implicit */int) max((((/* implicit */short) var_11)), ((short)7388)))))));
        arr_14 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)86))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 3; i_7 < 10; i_7 += 1) 
                {
                    {
                        arr_25 [11U] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) (+(((var_5) / (((/* implicit */int) var_0))))));
                        var_20 = ((/* implicit */int) ((signed char) arr_6 [i_7 + 1] [i_7] [i_7 - 2]));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_20 [i_4])) ? (((unsigned int) var_14)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)7377))))))))));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 9; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 2; i_10 < 10; i_10 += 2) 
                    {
                        for (signed char i_11 = 1; i_11 < 9; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -1606375239)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_6 [i_11 + 2] [i_10] [i_10 + 2]))), ((-(arr_6 [i_11 + 1] [i_10] [i_10 - 1])))));
                                var_23 -= ((/* implicit */unsigned char) max((var_15), (((/* implicit */long long int) var_4))));
                                var_24 *= ((/* implicit */_Bool) (+(max((((/* implicit */int) var_13)), (((int) (short)-7384))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) (+(max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) ((_Bool) arr_18 [(signed char)8] [4U] [i_9] [i_8])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 10; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 3; i_13 < 11; i_13 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((signed char) ((signed char) (signed char)-112))))));
                                var_27 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_35 [i_4] [i_4] [i_4] [i_4] [5ULL] [i_4] [i_4]))))));
                                var_28 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -199209124)), (0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8 - 1] [7ULL] [i_8 + 2] [i_8] [i_8 - 1] [i_8 + 2]))) : (((unsigned long long int) -199209124)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_14 = 3; i_14 < 16; i_14 += 1) 
    {
        var_29 = ((/* implicit */_Bool) max((min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) ((unsigned char) (signed char)-63))))), (((/* implicit */int) arr_40 [i_14 + 2]))));
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)22762)))))))))));
    }
    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7402))) : (3456127189U))))))));
}
