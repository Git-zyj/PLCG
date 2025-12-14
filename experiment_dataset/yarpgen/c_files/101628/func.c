/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101628
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
    var_12 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)65520)), ((-(((/* implicit */int) var_1))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) var_10);
                    var_13 = ((/* implicit */int) var_2);
                    var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) (unsigned short)65520)))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) arr_1 [i_0 + 1])));
        var_15 = ((/* implicit */short) min((((/* implicit */int) ((((var_11) - (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0] [i_0])))) < (((/* implicit */unsigned long long int) ((int) arr_2 [i_0] [i_0] [i_0])))))), (max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)8] [i_0]))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((((arr_9 [i_3]) || (((/* implicit */_Bool) arr_11 [i_3])))) ? (arr_11 [i_3]) : (((((/* implicit */_Bool) (unsigned short)15)) ? (arr_11 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned short)15)))) < (((/* implicit */int) min(((unsigned short)65531), ((unsigned short)22))))))))));
        arr_12 [i_3] = ((((/* implicit */_Bool) ((long long int) ((unsigned long long int) arr_10 [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)7)) > (((/* implicit */int) (unsigned short)17))))) + (((/* implicit */int) min(((unsigned short)12), ((unsigned short)17))))))) : (((min((((/* implicit */long long int) (unsigned short)47)), (var_4))) - (var_4))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_13 [i_4]))) ? (((((/* implicit */int) (unsigned short)65500)) | (((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned short)6))));
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) var_9);
                    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_6] [i_4] [i_5 - 1]))));
                    var_19 = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_5 - 1] [i_4])) < (((/* implicit */int) (unsigned short)65529))));
                    var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (unsigned short)34))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    arr_29 [i_4] [i_7] [i_7] [i_7] = ((/* implicit */long long int) arr_17 [i_4]);
                    arr_30 [i_4] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_8] [i_4] [i_4])) ^ (((/* implicit */int) var_6))));
                    var_21 = (-(((/* implicit */int) (unsigned short)6)));
                    var_22 = ((/* implicit */_Bool) var_9);
                    arr_31 [i_4] [i_7] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65532)) > (((/* implicit */int) (unsigned short)65532))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) min((var_3), (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)65528)))))))));
}
