/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151826
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
    var_11 = min((max((((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))))), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) var_4)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (short)-15177)) : (arr_3 [i_0] [i_0])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
        var_13 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned short)65535))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)5])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (arr_3 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_14 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_1] [i_1]))));
        var_15 = ((/* implicit */signed char) (~((+(((unsigned int) arr_6 [i_1] [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            var_16 = ((/* implicit */_Bool) max((var_16), ((!((!(((_Bool) arr_9 [i_2] [i_2]))))))));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 22; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_8 [i_2] [i_3])))), (((/* implicit */int) var_7))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_4 - 2])) ? (((((/* implicit */unsigned int) min((var_6), (((/* implicit */int) (short)-15177))))) * ((-(var_1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_2] [i_2] [i_5])))))));
                        var_19 = max((((/* implicit */int) ((unsigned short) (unsigned char)65))), (min((((/* implicit */int) ((_Bool) arr_9 [i_3] [i_3]))), ((~(((/* implicit */int) (_Bool)1)))))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (_Bool)1))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (unsigned short i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) min(((_Bool)0), (((arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_2] [i_2] [(signed char)2])))))))));
                            var_22 = ((/* implicit */unsigned char) (-(((((4257262401U) - (4257262401U))) >> (0U)))));
                            var_23 = ((/* implicit */unsigned char) (short)-3863);
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */signed char) (((-(((/* implicit */int) (short)-15169)))) >> (min((13U), (3206221674U)))));
    }
    var_25 = ((/* implicit */unsigned char) (signed char)-31);
    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((_Bool) max((((1055370718) + (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (signed char)21))))))))));
}
