/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171727
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (-(((arr_0 [i_0] [i_0]) >> (((((/* implicit */int) (unsigned char)184)) - (177)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_12 ^= (!(((/* implicit */_Bool) ((unsigned long long int) (-(-1587806706))))));
                                arr_12 [i_4] [i_3] [i_3] [i_2] [i_3] [i_0] = ((min((arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] [i_0]), (((/* implicit */unsigned int) (unsigned char)72)))) != (((/* implicit */unsigned int) (((((_Bool)1) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 - 1] [i_3])))) ? (((/* implicit */int) max(((unsigned char)13), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)71)) || ((_Bool)1))))))));
                                arr_13 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (~((+((~(arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_2] = ((/* implicit */long long int) ((unsigned int) (unsigned char)183));
                    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_1 - 1] [i_1 - 1]))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)9618)))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned int) arr_5 [i_0]);
        var_15 = ((/* implicit */unsigned int) ((long long int) 3139803411U));
    }
    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) 4988954611284820669LL);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    arr_24 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (((~(((/* implicit */int) ((_Bool) (_Bool)1))))) * ((~(((/* implicit */int) ((((/* implicit */unsigned int) arr_4 [i_5])) <= (arr_17 [i_6]))))))));
                    arr_25 [i_5] [i_5] [i_7] = max((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (arr_10 [i_5 - 2] [i_5] [i_5 + 1] [i_6] [i_6] [13] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))) : (2592262064U))));
                }
            } 
        } 
    }
    for (unsigned int i_8 = 2; i_8 < 9; i_8 += 3) /* same iter space */
    {
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)529))) / (arr_2 [i_8] [i_8])))) ? (((/* implicit */int) arr_27 [i_8])) : (((/* implicit */int) (signed char)33))));
        /* LoopNest 3 */
        for (long long int i_9 = 2; i_9 < 6; i_9 += 4) 
        {
            for (int i_10 = 2; i_10 < 9; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    {
                        arr_37 [i_8] [i_9] [i_10] [i_10] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34524)) ? (((/* implicit */int) ((((/* implicit */int) arr_30 [i_11])) >= (((/* implicit */int) arr_16 [i_9 - 1]))))) : (((/* implicit */int) min(((unsigned char)184), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((/* implicit */int) ((_Bool) arr_21 [i_8 + 1] [i_9 + 4] [i_10 + 1]))) : (((/* implicit */int) arr_21 [i_9] [i_10 - 1] [i_11])));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            var_17 &= ((/* implicit */unsigned int) ((((((long long int) 550958040U)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)30987)))))))));
                            var_18 |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65001)) * (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)30987))))) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) max(((unsigned short)30967), (((/* implicit */unsigned short) arr_34 [i_9] [i_10] [i_9])))))))));
                            arr_42 [i_8] [i_11] [i_10] [i_9] [i_8] [i_8] = ((max((((/* implicit */long long int) (_Bool)1)), (((long long int) (_Bool)1)))) > (((/* implicit */long long int) max(((+(((/* implicit */int) arr_21 [i_11] [i_10] [i_9])))), (((((/* implicit */int) (unsigned short)529)) / (((/* implicit */int) (unsigned short)529))))))));
                            arr_43 [i_8] [i_9] [i_10] [i_8] [i_12] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                        }
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) 4929520568349926795ULL);
                            var_20 = (unsigned char)74;
                            arr_46 [i_8] = ((/* implicit */int) ((-6864213492827730728LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_21 |= ((/* implicit */signed char) arr_9 [i_10] [i_10] [i_11] [i_10]);
                        }
                        var_22 ^= ((/* implicit */short) (+(arr_4 [i_9 + 2])));
                        arr_47 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) ((_Bool) arr_36 [i_8] [i_8 - 1] [i_10] [i_10 - 1] [i_9 + 2] [i_9 + 1]));
                        arr_48 [i_11] [i_11] |= ((/* implicit */long long int) (unsigned char)238);
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)31017)) ? (var_8) : (((/* implicit */int) (unsigned short)28345))))) / (var_1))) ^ (((/* implicit */unsigned int) -1670298269))));
    var_24 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
    var_25 = ((/* implicit */int) 14U);
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned short)31011))) ? (((/* implicit */int) ((2147483647) == (((/* implicit */int) (_Bool)0))))) : ((-(((/* implicit */int) (_Bool)1))))))) : (var_6)));
}
