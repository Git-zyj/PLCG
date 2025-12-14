/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119079
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
    var_12 = ((/* implicit */signed char) 6385580699964509486ULL);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [(unsigned char)4] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_13 = arr_0 [i_0];
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) arr_4 [(short)15] [i_1]);
        arr_5 [i_1] = max((((/* implicit */unsigned int) (_Bool)1)), (4294967290U));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */short) min((((unsigned long long int) (+(((/* implicit */int) arr_11 [(unsigned char)7] [i_1] [i_1] [i_1]))))), (6385580699964509486ULL)));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((min((2526862285252817740ULL), (((/* implicit */unsigned long long int) arr_6 [i_1] [(unsigned char)10] [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (var_1) : (((/* implicit */long long int) var_2))))) ? ((+(var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)96)) + (((/* implicit */int) arr_10 [i_3] [(unsigned char)16] [i_1])))))))))))));
                    var_16 = ((/* implicit */long long int) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 3; i_4 < 24; i_4 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((unsigned short) ((signed char) var_8)));
        arr_15 [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)75))));
        arr_16 [i_4] = ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (6385580699964509486ULL)))))) || ((_Bool)1));
        /* LoopNest 3 */
        for (signed char i_5 = 3; i_5 < 21; i_5 += 1) 
        {
            for (long long int i_6 = 1; i_6 < 22; i_6 += 1) 
            {
                for (unsigned int i_7 = 3; i_7 < 23; i_7 += 4) 
                {
                    {
                        arr_25 [i_7] [i_4] [i_6 - 1] [i_4] [i_4] = ((((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4 - 3] [i_4]))) > (arr_20 [i_4] [i_4] [i_4]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [(signed char)9])) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-77)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) 5681145545083941791ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_9))) : (min((((/* implicit */unsigned int) (unsigned short)44231)), (arr_21 [i_7 - 2] [i_6 - 1] [i_5 - 3] [i_4]))))));
                        var_18 = ((/* implicit */unsigned char) var_2);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_8 = 3; i_8 < 24; i_8 += 1) /* same iter space */
    {
        arr_30 [i_8 - 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-94))));
        arr_31 [i_8] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (_Bool)1)), ((+(var_7))))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned short)21305)))), (((/* implicit */int) min((var_3), ((signed char)94)))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_9 = 2; i_9 < 12; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                var_19 = (-(((long long int) (+(((/* implicit */int) var_8))))));
                var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) 262112U))))) ? (max((var_11), (((/* implicit */unsigned int) (signed char)96)))) : (arr_37 [i_10] [i_9 - 1] [i_9])))));
                var_21 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (signed char)96)))), (((/* implicit */int) ((unsigned char) min((var_10), (((/* implicit */long long int) var_2))))))));
            }
        } 
    } 
    var_22 = var_3;
}
