/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181834
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
    var_18 = ((/* implicit */unsigned long long int) max((((((unsigned int) var_13)) | (((/* implicit */unsigned int) ((var_8) | (((/* implicit */int) (unsigned short)55240))))))), (((((/* implicit */_Bool) 4294967295U)) ? (536854528U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))));
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))))) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) -1465085999)) : (((((/* implicit */_Bool) -458777424)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))) : (4294967295U)))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)60))))), ((-(2939659663U)))))) ? ((~(var_10))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) var_6))))))));
    var_21 = ((/* implicit */long long int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 += ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4428211717057326160ULL)) ? (3316841876U) : (1355307632U)))) ? (((((/* implicit */_Bool) (signed char)-61)) ? (823228756) : (((/* implicit */int) (short)-27729)))) : ((+(((/* implicit */int) (signed char)110))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_2 [i_0]) * (arr_2 [i_0])));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((_Bool) ((unsigned short) (short)-29807))))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [10U] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)14] [i_2] [(short)10])) ? (arr_8 [2] [2]) : (((/* implicit */unsigned int) 1281716124))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(signed char)8] [i_2] [i_3]))) : (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 136902082560LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_0] [i_1 - 3] [(_Bool)1] [i_3] [i_3])))))));
                        arr_13 [i_1] [i_1 - 1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned short) (-(var_5)));
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) 136279149U))));
                    }
                } 
            } 
            arr_14 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_1 + 2] [0] [i_1] [i_1 + 1] [i_1 - 3]))));
            var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1 - 3]))));
        }
    }
    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)175)), ((unsigned short)65535))))));
                    arr_23 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((arr_0 [10LL] [i_6]) >> (((/* implicit */int) ((6785775887778694504LL) != (((/* implicit */long long int) arr_2 [i_5]))))))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_6])))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (signed char i_8 = 1; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_31 [i_8] [i_7] [i_5] [i_5] [i_4] [i_5] [i_4] = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_8 - 1] [i_8 - 1] [i_5] [i_8 + 1] [i_8]))))));
                                arr_32 [i_4] [i_5] [i_4] [i_4] [i_6] [i_6] [i_8] |= ((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_17)))), ((-(((/* implicit */int) arr_27 [i_4] [i_5] [i_5] [i_5] [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned int) arr_25 [i_4]))));
        arr_33 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_4] [i_4]))) == ((~(652399159U)))));
    }
}
