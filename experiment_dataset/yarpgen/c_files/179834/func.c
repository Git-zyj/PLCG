/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179834
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
    var_13 = ((/* implicit */unsigned short) (signed char)-127);
    var_14 = ((/* implicit */signed char) min((max((var_6), (var_0))), (max((var_6), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_4 [i_0 + 1] [i_1 + 1] [i_1 - 2] [i_2 + 1]), (arr_4 [i_0 + 1] [i_1 + 1] [i_1 - 2] [i_2 + 1])))) & (((/* implicit */int) (unsigned char)82))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) min((max(((signed char)118), ((signed char)-102))), (min((((/* implicit */signed char) (_Bool)0)), ((signed char)104))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned int) var_9);
        arr_13 [i_3] [i_3] = 2509702529061689801ULL;
        arr_14 [(signed char)11] = ((/* implicit */_Bool) max((((long long int) var_1)), (((/* implicit */long long int) var_11))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_24 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) >> (((18446744073709551596ULL) - (18446744073709551596ULL)))))) ? (8) : (max((arr_9 [i_5]), (((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (min((((/* implicit */unsigned int) (unsigned short)0)), (4294967288U))))))));
                        arr_25 [i_3] [(unsigned char)4] [i_5] [13ULL] [(unsigned short)21] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_10)), (1LL)));
                        arr_26 [i_6] [i_6] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */short) ((_Bool) min((var_0), (((/* implicit */unsigned long long int) -3185998062543972112LL)))))), (min((arr_18 [i_5] [i_4] [i_3]), (((/* implicit */short) (unsigned char)147))))));
                    }
                } 
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (~(5ULL))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) var_6))) * (min((arr_11 [i_7] [i_7]), (((/* implicit */unsigned long long int) (_Bool)0))))));
        arr_31 [i_7] = var_11;
        arr_32 [(_Bool)1] = ((/* implicit */int) min((((/* implicit */long long int) 186451439)), (0LL)));
    }
    var_18 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-105)), (-3890336072492554479LL)))) ? (min((4ULL), (var_6))) : (((/* implicit */unsigned long long int) 95835264)))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_11), ((signed char)75)))))))));
}
