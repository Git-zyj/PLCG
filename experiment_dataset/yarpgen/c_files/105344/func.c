/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105344
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (-467478949097143355LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-467478949097143346LL)))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned char) var_11))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_0 - 1])) & (((/* implicit */int) arr_2 [i_0 - 1])))) & (((/* implicit */int) arr_2 [i_0]))));
        var_12 = ((/* implicit */unsigned long long int) ((unsigned char) 467478949097143364LL));
    }
    for (long long int i_1 = 1; i_1 < 14; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_2 = 3; i_2 < 13; i_2 += 4) /* same iter space */
        {
            arr_9 [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((signed char) (signed char)-25))) ? (var_5) : (((/* implicit */unsigned long long int) (+(arr_6 [i_1] [(unsigned short)8]))))))));
            arr_10 [i_2] [i_2] = ((/* implicit */int) var_6);
            var_13 *= ((/* implicit */_Bool) var_0);
        }
        for (short i_3 = 3; i_3 < 13; i_3 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_1] [i_3] [i_3 - 3]))))) ? (((/* implicit */int) ((signed char) -6698436374467177201LL))) : ((+(((/* implicit */int) var_8)))))))));
            var_15 = ((/* implicit */signed char) -467478949097143355LL);
            var_16 = ((/* implicit */unsigned char) arr_11 [i_1] [i_3] [i_1]);
        }
        /* vectorizable */
        for (short i_4 = 3; i_4 < 13; i_4 += 4) /* same iter space */
        {
            var_17 += ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 1688885484540602635ULL))))));
            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)61646))));
        }
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) | ((-(((/* implicit */int) max((var_8), (var_0))))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1]))) < (7LL)))) & (((/* implicit */int) min(((unsigned short)59837), (((/* implicit */unsigned short) arr_8 [(_Bool)1] [(_Bool)1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (16757858589168948980ULL)));
                    arr_24 [i_1] [i_1] [i_1] [(short)7] = ((/* implicit */unsigned char) arr_23 [i_1] [i_1] [i_5] [i_6]);
                }
            } 
        } 
        arr_25 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_20 [i_1])), (arr_13 [13U]))))));
        arr_26 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10045)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) arr_17 [i_1] [i_1])) & (var_3)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_1]))))) : (var_2)));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
    {
        arr_31 [i_7] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_7])) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)3417)))))) : (min((var_1), (((/* implicit */unsigned long long int) arr_27 [i_7] [i_7])))))), (((/* implicit */unsigned long long int) arr_27 [i_7] [i_7]))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_30 [i_7]))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 10574740557005121167ULL))));
        var_22 ^= ((/* implicit */int) arr_33 [i_8]);
    }
}
