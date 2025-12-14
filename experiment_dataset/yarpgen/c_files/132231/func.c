/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132231
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
    var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_0)))) ? (((/* implicit */int) var_3)) : (2147483647)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 7266596907718906528ULL)))) : (var_10)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_9 [i_1] [i_1] [i_1] [i_3] = var_9;
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_3))))) ? (((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_3 [i_0] [i_1] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 562486372002742361ULL))))));
                            arr_10 [i_1] [i_1] [i_2] [i_2] [i_3 - 1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 2147483647)) : (min((17884257701706809260ULL), (((/* implicit */unsigned long long int) -2147483647))))))));
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)25257)) ? (6994371027375163691LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_3 - 3] [i_3 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_2] [i_3 + 1] [i_3 - 3]))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((2147483647) >> (((4222124650659840ULL) - (4222124650659834ULL)))));
                    var_16 = ((/* implicit */long long int) var_7);
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (var_2))) & (((/* implicit */int) min((var_12), (((/* implicit */short) arr_2 [i_4] [i_1]))))))));
                }
                for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_6))));
                    arr_19 [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 17884257701706809243ULL))) ? (min((((/* implicit */unsigned long long int) arr_16 [i_0] [i_5])), (arr_12 [i_1]))) : (((/* implicit */unsigned long long int) (+(var_11)))))));
                }
                arr_20 [5] [i_1] [i_1] = ((/* implicit */short) min(((-(min((2147483647), (((/* implicit */int) (signed char)52)))))), ((~(((/* implicit */int) (short)-25240))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_18 = var_0;
        arr_23 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) < (0)));
        var_19 *= ((/* implicit */short) var_5);
    }
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        var_20 += ((/* implicit */unsigned char) max((((/* implicit */int) arr_8 [(unsigned char)7] [i_7] [i_7] [(signed char)6] [i_7] [i_7])), (((((/* implicit */int) ((short) arr_0 [i_7]))) ^ (((/* implicit */int) var_4))))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            for (int i_9 = 4; i_9 < 12; i_9 += 2) 
            {
                {
                    arr_33 [i_7] [i_8] [i_8] = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned char) -2147483647))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)124)), ((unsigned char)247)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)105)))) : (((long long int) 2147483647))))));
                    var_21 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned short) arr_21 [i_7]))) : (((/* implicit */int) var_5)));
                }
            } 
        } 
    }
}
