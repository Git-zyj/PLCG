/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169735
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) arr_1 [i_0])))), (((((/* implicit */long long int) arr_1 [i_0])) ^ (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (short)5330))) << ((((+(9002176817058234998LL))) ^ (((((/* implicit */_Bool) arr_1 [i_0])) ? (9002176817058234998LL) : (((/* implicit */long long int) arr_1 [(unsigned char)18]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (!((_Bool)1))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (-(-9002176817058234999LL)));
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        arr_15 [i_4] [i_4] [i_3 + 2] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))))));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((arr_5 [i_2 + 1] [i_2 + 1]) != (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((unsigned int) 1550878838)) % (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)0] [i_2 + 1] [i_3 - 1] [i_2 - 2]))))))));
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) min(((-(732847927U))), (((/* implicit */unsigned int) ((signed char) arr_10 [i_5] [i_5] [i_5] [i_5])))));
        var_18 = ((/* implicit */unsigned short) ((((arr_16 [i_5]) <= (arr_16 [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [i_5]) == (arr_16 [i_5]))))) : ((+(arr_16 [i_5])))));
        arr_19 [i_5] [i_5] = ((/* implicit */_Bool) (+((-(arr_1 [(_Bool)1])))));
        var_19 = ((/* implicit */unsigned long long int) (-(((unsigned int) 9002176817058234985LL))));
    }
    var_20 = ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_6)))))) ? (((((/* implicit */long long int) 228287259U)) | (((((/* implicit */_Bool) (short)-29119)) ? (((/* implicit */long long int) var_12)) : (-60712724815387062LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (((((/* implicit */_Bool) 18134493225082905363ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)97))) : (var_10))))))));
    var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)29118)), (9002176817058234999LL)));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), ((+(17550062216038965964ULL)))));
}
