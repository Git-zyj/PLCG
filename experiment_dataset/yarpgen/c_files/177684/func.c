/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177684
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-((-(((((/* implicit */int) (unsigned char)162)) | (((/* implicit */int) var_1))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_1 [i_1]), (((/* implicit */unsigned char) (_Bool)1)))))));
                    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 2] [i_2 - 1])) % (((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)94))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_11))))) : (((((((/* implicit */int) (signed char)-111)) + (2147483647))) >> (((((/* implicit */int) var_9)) - (22635)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_17 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_4))))) == (((arr_14 [i_0] [i_0] [i_0] [i_4]) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3]))))))))));
                        arr_18 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned char)94), (((/* implicit */unsigned char) (signed char)-111)))))));
                        arr_19 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned short) (short)4095);
                        arr_20 [i_4] [i_5] [i_4] [i_5] = ((/* implicit */signed char) arr_7 [i_3] [i_3] [i_4] [i_5]);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0])) / (((/* implicit */int) (signed char)21))));
        arr_21 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (arr_14 [(unsigned short)6] [i_0] [i_0] [(unsigned short)6]) : (((/* implicit */long long int) arr_11 [(unsigned char)0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)-29011), (arr_12 [8LL] [i_0] [i_0] [i_0]))))) ^ ((+(arr_10 [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_11 [(signed char)8] [(signed char)8] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [(unsigned short)10])) ? (arr_16 [i_0] [i_0] [16U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned char) (+((-(arr_24 [i_6] [i_6])))));
        arr_25 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) -339433349)) ? (((/* implicit */int) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 3942239097U))))) > (((((/* implicit */_Bool) (signed char)-87)) ? (-116715835) : (((/* implicit */int) var_3))))))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) 3942239107U)) | (5293614749892632865ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3718680101U)) ? (-8060284745910240070LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18996)))))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
    {
        arr_28 [i_7] = ((/* implicit */short) var_17);
        arr_29 [i_7] = ((/* implicit */unsigned short) arr_22 [i_7]);
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 23; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    arr_36 [i_7] [i_7] [i_8] = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) arr_30 [i_7] [i_8 + 1])), (min((arr_24 [i_7] [i_8]), (((/* implicit */unsigned long long int) arr_35 [i_7] [i_7] [i_8] [i_7]))))))));
                    var_23 |= ((/* implicit */_Bool) var_18);
                    var_24 -= ((unsigned char) min((((/* implicit */long long int) -1847159469)), (6166443617314926618LL)));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) 1847159469))))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) 3942239107U)))))))));
    }
    var_26 = ((/* implicit */unsigned int) var_6);
}
