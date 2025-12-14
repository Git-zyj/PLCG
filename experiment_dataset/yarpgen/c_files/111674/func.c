/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111674
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
    var_12 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~((-(((/* implicit */int) var_5))))))) <= ((+(var_8)))));
    var_13 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (8225501819557662792ULL)))))) ? (((((/* implicit */_Bool) ((unsigned int) var_10))) ? (8225501819557662788ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 10221242254151888824ULL))))));
    var_14 |= ((/* implicit */unsigned int) var_9);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(arr_0 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (10221242254151888817ULL))))) % (var_2)));
    }
    for (int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        arr_16 [i_1] [i_1] [i_1 - 1] [i_2] [i_3] [i_4] = min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_2 [i_1] [i_2])) >> (((10221242254151888817ULL) - (10221242254151888802ULL))))))), (min((min((arr_7 [i_1] [i_2]), (((/* implicit */unsigned long long int) (unsigned short)20)))), (((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */long long int) arr_8 [i_1 - 2] [i_2] [i_2]))))))));
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) var_5)), (arr_13 [i_1] [i_1] [i_1 - 2] [i_1 - 2]))), (((/* implicit */unsigned long long int) arr_0 [i_3])))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_4)))))))) / (min((min((arr_0 [i_1]), (((/* implicit */long long int) arr_2 [i_1] [i_1])))), (((/* implicit */long long int) var_8))))));
        arr_17 [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_8 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1 - 2] [i_1 + 1]))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1]))) >= (8225501819557662815ULL))) ? (min((arr_7 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_11 [14ULL] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1])))))));
    }
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
        {
            var_17 = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5]))) : (((((/* implicit */_Bool) var_7)) ? (8225501819557662792ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_5]))) & (arr_9 [i_6]))));
            /* LoopNest 2 */
            for (signed char i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                for (int i_8 = 2; i_8 < 11; i_8 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) min(((-(var_11))), (((/* implicit */unsigned int) arr_10 [i_8] [i_7] [i_5]))));
                        var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_7 + 3] [i_8] [15U])) : (((/* implicit */int) arr_11 [i_7 + 2] [i_7 + 2] [i_7 + 2]))))));
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_7 + 1])) / (((/* implicit */int) arr_18 [i_5]))))) ? (((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_8 + 1])))))) : (((((/* implicit */unsigned long long int) 3132565799103193468LL)) / (arr_7 [i_7 - 1] [i_8 - 1]))));
                    }
                } 
            } 
            arr_29 [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) arr_25 [i_5] [(_Bool)1] [i_6] [i_6]);
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    {
                        var_21 = ((/* implicit */long long int) var_0);
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (min((((/* implicit */unsigned long long int) var_4)), (arr_5 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_5] [i_9] [i_10]))))), (min((((((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_9] [i_6])) ? (((/* implicit */unsigned long long int) -3132565799103193468LL)) : (arr_7 [i_5] [i_10]))), (10221242254151888824ULL))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
        {
            arr_40 [i_5] [i_11] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-7)) ? (arr_35 [i_5] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) > (var_2)))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(((/* implicit */int) arr_37 [10U] [i_11] [i_5])))))));
        }
        var_24 = min((((/* implicit */int) (signed char)-7)), (1849513104));
        var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) 846450657U))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (10221242254151888828ULL)));
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (+(var_2))))) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (min((((/* implicit */unsigned int) 2147483647)), (846450649U))))))));
}
