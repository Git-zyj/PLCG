/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152300
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_15 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) 7ULL))));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_3] [i_2]))));
                        arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) -6042772780353456809LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])))))) : (7190490564457294596LL)));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned int) (((~(5785318537420611692ULL))) << (((4633971219738487366ULL) - (4633971219738487305ULL)))));
                        var_18 = ((/* implicit */unsigned char) (+(((int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_11 [i_0] [i_4 + 2] [i_4 + 2] [(short)7] [i_1])))))));
                        var_19 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_4] [i_4] [(unsigned char)16] [i_4])) / (((/* implicit */int) arr_6 [i_4] [i_4 - 2] [i_2] [i_4]))))) / (max((((/* implicit */unsigned long long int) 7190490564457294596LL)), (arr_13 [i_4] [i_4 + 1] [i_4] [i_4] [i_4])))));
                    }
                    for (short i_5 = 1; i_5 < 24; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((3620701443572130988ULL) >= (min((arr_13 [i_0] [i_1] [i_2] [i_0] [i_0]), (((/* implicit */unsigned long long int) -1127745413)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_5 + 1] [(unsigned char)4] [i_5 + 1])), ((unsigned char)188)))) : (((((/* implicit */int) (short)-2354)) & (1787779967))))))));
                        var_21 = ((/* implicit */short) (~(((unsigned long long int) arr_7 [i_5 + 1] [17LL] [i_5 - 1] [i_1]))));
                        var_22 ^= ((/* implicit */short) arr_17 [i_5]);
                        arr_19 [i_5 - 1] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(signed char)17] [1ULL])) && (((/* implicit */_Bool) (short)-2347)))) && (((/* implicit */_Bool) min(((short)15872), (((/* implicit */short) (_Bool)1)))))))) | ((~(((int) (signed char)112))))));
                    }
                    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) | (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))) | ((~(-70438481)))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) ^ (max((-4110960575924966764LL), (((/* implicit */long long int) ((arr_13 [i_2] [(short)9] [13] [i_1] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72)))))))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((123145302310912ULL), (((/* implicit */unsigned long long int) var_3))))))))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        for (short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 1) 
            {
                {
                    var_26 += ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_4 [i_8 + 2]))) > (((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_6] [i_8 + 2] [i_7])) || (((/* implicit */_Bool) arr_2 [i_6]))))) / ((+(((/* implicit */int) arr_16 [i_8] [10ULL] [i_6] [i_6]))))))));
                    var_27 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) <= (4173522845123993539LL)));
                }
            } 
        } 
    } 
}
