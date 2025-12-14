/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161500
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
    var_20 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
        arr_5 [i_0] &= ((/* implicit */signed char) (-(((2093199055) & (((/* implicit */int) (unsigned short)52677))))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 3347793628U))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)52652)) != ((~(0))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */int) arr_1 [i_1] [i_1]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        arr_14 [i_2] = ((/* implicit */unsigned long long int) max((((int) ((((/* implicit */_Bool) arr_8 [i_2])) || (((/* implicit */_Bool) arr_2 [i_2]))))), (max((max((0), (((/* implicit */int) (unsigned char)255)))), (((((((/* implicit */int) arr_1 [i_2] [i_2])) + (2147483647))) << (((arr_2 [i_2]) - (946362909)))))))));
        arr_15 [i_2] = ((/* implicit */signed char) (unsigned short)52677);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) arr_16 [i_3]))) / (1205847820962469482ULL)));
            arr_19 [i_2] [i_2] [i_3] = ((arr_2 [i_2]) << (((((arr_17 [i_2]) + (1264931602630806925LL))) - (29LL))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                arr_24 [i_2] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) arr_3 [i_4] [i_5]);
                arr_25 [i_2] [i_5] &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((int) arr_2 [(_Bool)1]))), (3462215992U)));
                arr_26 [i_2] [i_2] [i_5] = ((/* implicit */_Bool) var_10);
                arr_27 [i_5] [i_4] [i_2] = ((/* implicit */short) max((((arr_8 [i_2]) == (((/* implicit */unsigned long long int) (~(2073215883U)))))), (((((/* implicit */int) (short)-21193)) < ((-(((/* implicit */int) arr_12 [i_2] [i_4]))))))));
            }
            arr_28 [i_2] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_2] [i_2] [i_4] [i_2]))))), (8070450532247928832ULL)));
            arr_29 [i_4] = ((/* implicit */int) arr_23 [i_2] [i_2]);
            arr_30 [i_2] = ((/* implicit */int) ((947173668U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
            arr_31 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_3 [i_2] [i_2]))) << ((((~(var_18))) - (15346323750395430103ULL)))));
        }
    }
    /* LoopSeq 1 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        arr_34 [i_6] [(signed char)4] = ((/* implicit */unsigned long long int) arr_22 [i_6] [i_6] [4ULL] [i_6]);
        arr_35 [i_6] = ((/* implicit */int) min((((/* implicit */long long int) arr_2 [i_6])), (((max((((/* implicit */long long int) (_Bool)1)), (arr_21 [i_6]))) >> (((/* implicit */int) arr_12 [i_6 - 1] [i_6 - 1]))))));
    }
}
