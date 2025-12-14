/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115518
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */int) var_6)) <= (((((/* implicit */int) var_6)) % (((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_15))) : (((((/* implicit */_Bool) ((unsigned char) var_10))) ? (var_15) : ((+(var_14)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_18 &= ((/* implicit */long long int) ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) max((2772170631U), (((/* implicit */unsigned int) (signed char)-67)))))));
        var_19 = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((~(((/* implicit */int) arr_1 [i_0] [i_0])))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 2]);
                    arr_8 [i_1] = ((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_2 [i_0] [i_1])), (arr_4 [i_0] [i_2 - 1] [i_1]))), (max((((/* implicit */long long int) (+(((/* implicit */int) var_16))))), (arr_6 [(unsigned char)0] [i_2 - 2] [i_0] [i_0])))));
                    var_20 = ((/* implicit */_Bool) (-(var_11)));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((((long long int) (signed char)22)), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_3])) == (((/* implicit */int) var_10)))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_10 [i_3]))))) & (((arr_12 [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3])))))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) var_6);
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (long long int i_5 = 1; i_5 < 18; i_5 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [(_Bool)1])) ? (arr_12 [i_3]) : (2744943515U)))), (arr_15 [i_3] [i_4] [i_4]))), (((/* implicit */long long int) arr_12 [i_3]))));
                    arr_18 [i_3] [i_3] [i_5 + 1] [i_3] = ((/* implicit */signed char) max((min((arr_14 [i_3]), (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_15 [i_3] [i_3] [i_3])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) arr_17 [(_Bool)1] [i_4] [(_Bool)1] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_16)))) : (((var_5) ? (arr_15 [i_3] [i_3] [i_5]) : (var_15))))))));
                    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3])))))));
                    arr_19 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */long long int) (~(9389714586868333347ULL)));
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_6] [i_6])))))));
        arr_24 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)55)), (arr_21 [i_6])))) ? ((-(arr_21 [i_6]))) : (arr_21 [i_6])));
    }
}
