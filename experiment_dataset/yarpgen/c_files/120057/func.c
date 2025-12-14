/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120057
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_10 += ((/* implicit */unsigned int) -275283843);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned long long int) var_5);
            var_11 = ((/* implicit */short) ((275283845) <= (-1)));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
            var_12 = ((/* implicit */short) var_9);
            var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (-275283843)))) : (((((/* implicit */unsigned int) 1)) % (arr_3 [i_0] [i_0] [i_0]))))))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_9 [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (max((((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (11158861297983041162ULL) : (6301368504931045445ULL))), (((/* implicit */unsigned long long int) min((0), (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6927149975339940776LL))))))));
            var_14 -= ((/* implicit */signed char) var_9);
        }
    }
    var_15 = max((((/* implicit */long long int) 0)), (var_1));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0))));
    var_17 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            for (long long int i_5 = 3; i_5 < 10; i_5 += 4) 
            {
                {
                    arr_19 [i_5] [i_5] [i_5] = ((/* implicit */long long int) max((((((/* implicit */_Bool) 23ULL)) ? (arr_0 [i_3 + 1] [i_4 - 1]) : (arr_0 [i_4 - 1] [i_4 - 1]))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))) : (-5054645783308690264LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))))));
                    var_18 = ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 + 1] [i_3])) ? (((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3 + 1])) ? (((/* implicit */long long int) arr_3 [i_3] [i_3] [i_5 - 2])) : (var_7))) : (((/* implicit */long long int) 2847876569U)));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_15 [i_3 + 1] [i_4 - 1]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)80))))))) : (var_7)));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), ((+((-(arr_2 [i_4 + 2])))))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~(var_7))))));
                }
            } 
        } 
    } 
}
