/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15767
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) min(((unsigned char)208), (((/* implicit */unsigned char) var_8)))))));
    var_12 ^= var_10;
    var_13 = ((/* implicit */int) ((unsigned int) ((var_7) << (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) >= (18446744073709551615ULL)))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 11; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */short) min((((max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) (unsigned short)0)))))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((var_10) == (((/* implicit */unsigned int) min((8191), (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_8))))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                arr_9 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) 0ULL));
                arr_10 [i_0 + 1] [i_0 + 1] [i_1] [1U] = ((signed char) 17179869183ULL);
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68)))));
            }
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) << (((var_5) - (3688960167U)))))), (var_1))) % (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))))));
                arr_14 [i_1] [9] [i_1] [i_0] = ((/* implicit */unsigned char) var_4);
                arr_15 [i_0] [i_1] [i_3] = ((/* implicit */long long int) (unsigned char)47);
                arr_16 [i_3] = ((/* implicit */unsigned char) 1374556722632004660ULL);
            }
            for (int i_4 = 4; i_4 < 10; i_4 += 1) 
            {
                arr_19 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((max((29360128), (var_4))), (((/* implicit */int) (unsigned char)181))))), (12967527582235103080ULL)));
                var_15 |= ((/* implicit */unsigned long long int) var_2);
                arr_20 [i_0] [3LL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)63)) * (((/* implicit */int) (unsigned char)193))))) % (var_1)));
                var_16 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_3)), (4294967295U))) | (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            }
            arr_21 [i_0] [i_0] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (var_2)))) * (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 0U))))), ((unsigned char)28))))));
        }
        arr_22 [i_0] [i_0 - 3] = ((int) ((min((var_5), (var_7))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94)))));
        arr_23 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_1)), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_7)))))));
        arr_24 [i_0] = ((/* implicit */int) var_3);
    }
    for (int i_5 = 3; i_5 < 11; i_5 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((unsigned long long int) 281474976710648LL));
        var_18 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 5024039376360450437ULL)) && (((/* implicit */_Bool) (unsigned short)24645)))));
        /* LoopSeq 3 */
        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((int) ((442474807U) >> (((3446829236963731237ULL) - (3446829236963731234ULL))))))), (((unsigned long long int) var_7)))))));
            arr_30 [i_5] [i_6] [i_6 - 1] = ((/* implicit */signed char) var_0);
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_38 [i_8] [i_8] [i_9] [6U] |= ((/* implicit */unsigned int) ((unsigned long long int) ((var_2) >> (((var_7) - (1537418023U))))));
                        var_20 = ((/* implicit */short) ((386327222U) + (((/* implicit */unsigned int) var_4))));
                        arr_39 [i_5] [i_7] [i_8] [i_7] = ((int) (signed char)1);
                        arr_40 [i_8] [i_8] [i_8] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) > (0ULL)));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned int) (signed char)9)))));
        }
        for (long long int i_10 = 4; i_10 < 10; i_10 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) * (18446744073709551615ULL))) < (((/* implicit */unsigned long long int) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))))) == (max((max((((/* implicit */long long int) var_7)), (-6584068119964913536LL))), (((/* implicit */long long int) max((1U), (((/* implicit */unsigned int) var_8)))))))));
            arr_44 [i_5] &= ((/* implicit */unsigned char) 6096797707476047830ULL);
            var_23 = ((/* implicit */signed char) ((min((17072187351077546935ULL), (((/* implicit */unsigned long long int) var_4)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (10632067955179738858ULL)))));
            arr_45 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (_Bool)1))))) < (((/* implicit */int) min(((signed char)25), (((/* implicit */signed char) ((((/* implicit */_Bool) 17072187351077546956ULL)) || (((/* implicit */_Bool) var_9))))))))));
            var_24 = ((/* implicit */unsigned short) min((7814676118529812758ULL), (((((/* implicit */unsigned long long int) var_1)) & (16124437465136989726ULL)))));
        }
    }
    var_25 ^= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) (signed char)-51)))))))), (var_1)));
}
