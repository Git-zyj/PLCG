/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132998
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
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((14998959845700963050ULL), (((/* implicit */unsigned long long int) var_11))))))))));
    var_20 = var_3;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(_Bool)1] [i_2] = ((/* implicit */short) (~(((((((/* implicit */_Bool) 3447784228008588565ULL)) ? (((/* implicit */int) arr_3 [(unsigned char)14] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)896)))) ^ (((/* implicit */int) min((((/* implicit */short) (unsigned char)55)), ((short)15))))))));
                    arr_8 [i_2] [i_2] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)136))))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23))) : (var_10))))), (min(((~(arr_4 [i_0] [i_2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_0])))))))));
                    var_21 = ((/* implicit */signed char) arr_2 [i_2]);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_2] [i_0] [i_1] [4U] [i_1] = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned char)4))))));
                        var_22 = ((/* implicit */unsigned short) var_8);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) 14998959845700963050ULL);
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_9 [i_0] [i_0] [i_2] [i_0]);
                        var_24 = ((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_2] [i_4]);
                    }
                    arr_15 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)139))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        arr_19 [i_5] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) (signed char)-1))))));
        /* LoopNest 3 */
        for (signed char i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            for (unsigned char i_7 = 3; i_7 < 13; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((3447784228008588577ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7])))))) ? (((/* implicit */int) ((((/* implicit */int) (short)15)) < (((/* implicit */int) arr_24 [(short)1]))))) : (((/* implicit */int) (signed char)-1))))));
                        var_26 = ((/* implicit */long long int) arr_24 [i_5]);
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) var_2);
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned long long int) ((_Bool) var_3));
}
