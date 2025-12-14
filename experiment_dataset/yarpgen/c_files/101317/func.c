/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101317
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) <= (((/* implicit */int) var_8))));
    var_19 = ((/* implicit */signed char) (~(((long long int) ((unsigned short) var_1)))));
    var_20 = ((/* implicit */unsigned int) max((3020386018342847068ULL), (((/* implicit */unsigned long long int) var_9))));
    var_21 = ((/* implicit */unsigned long long int) (_Bool)0);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)78)), (max((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)0)))), (var_17)))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_4 [i_0]) < (arr_4 [i_2])))) >> (((((/* implicit */int) var_13)) - (77)))));
                        var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_1 [i_3])) - (((/* implicit */int) var_1))))));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_10 [10] [i_2] [i_1] [10] [i_0])) ? (arr_8 [i_0] [i_2]) : (arr_8 [i_2] [i_2]))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 127U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [4U] [i_0] [4U])) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [18ULL])) && (((/* implicit */_Bool) arr_7 [6ULL] [i_0] [6ULL])))))));
    }
    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2700581585U)))))) : (((((/* implicit */_Bool) arr_4 [i_4])) ? (1276630752520842871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_26 *= ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) (signed char)-73)), (1137115545U))));
                        var_27 = ((/* implicit */unsigned long long int) arr_9 [i_4] [i_5] [i_6] [i_4]);
                    }
                } 
            } 
        } 
    }
}
