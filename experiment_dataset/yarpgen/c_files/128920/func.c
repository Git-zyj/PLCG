/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128920
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_4 [i_1] [i_1]))))), (max((((/* implicit */int) arr_2 [i_2])), (1372866116)))))), (min((((/* implicit */long long int) min((arr_7 [i_1]), (((/* implicit */unsigned short) var_16))))), (max((((/* implicit */long long int) (short)15872)), (arr_5 [i_1])))))));
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned short) (unsigned char)8))))), (min((((/* implicit */long long int) arr_0 [i_1])), (var_6)))))), (min((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_11))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_1])), ((unsigned short)32768))))))));
                    arr_8 [i_2] [i_1] [i_1] = ((/* implicit */int) max((max((((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (var_13)))), (max((((/* implicit */long long int) var_16)), (arr_3 [i_1]))))), (((/* implicit */long long int) max((max((var_10), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_2 [i_0]), (var_8)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        arr_12 [5] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((max((var_2), (var_6))), (max((arr_11 [i_3] [i_3]), (((/* implicit */long long int) 915642225))))))), (max((((/* implicit */unsigned long long int) min(((_Bool)1), (arr_9 [i_3])))), (max((((/* implicit */unsigned long long int) var_3)), (var_4)))))));
        var_19 ^= ((/* implicit */short) max((max((max((var_11), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) -1628471962))))))), (((/* implicit */unsigned long long int) max((min((520192U), (((/* implicit */unsigned int) -915642212)))), (((/* implicit */unsigned int) 1628471970)))))));
    }
    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) min((arr_9 [i_4]), (arr_13 [i_4])))), (max((4294447112U), (((/* implicit */unsigned int) var_7)))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))), (max((((/* implicit */unsigned short) (short)-15868)), (arr_10 [i_4] [i_4]))))))));
        arr_15 [i_4] |= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((min((1779265434922845820LL), (var_5))), (min((-8367387657783389374LL), (((/* implicit */long long int) -1803280997))))))), (min((min((18446744073709551595ULL), (((/* implicit */unsigned long long int) arr_11 [i_4] [i_4])))), (((/* implicit */unsigned long long int) max((arr_9 [i_4]), (arr_9 [i_4]))))))));
        arr_16 [i_4] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)48)), (arr_11 [i_4] [i_4])))), (min((((/* implicit */unsigned long long int) arr_14 [i_4] [i_4])), (9468712550538442721ULL))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) arr_13 [i_4])), (arr_14 [4] [i_4]))), (min((arr_10 [i_4] [(unsigned short)19]), (((/* implicit */unsigned short) (_Bool)1)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), ((_Bool)1)));
            arr_20 [i_5] [7U] = ((/* implicit */unsigned short) (_Bool)1);
            arr_21 [i_5] [4U] = ((/* implicit */unsigned short) (short)3968);
        }
    }
    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            for (unsigned short i_8 = 1; i_8 < 21; i_8 += 1) 
            {
                {
                    arr_30 [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) max((((/* implicit */int) var_7)), (1803280994)))), (max((((/* implicit */long long int) (short)15160)), (var_2))))), (((/* implicit */long long int) min((max((arr_29 [3LL] [(unsigned short)16]), ((-2147483647 - 1)))), (min((((/* implicit */int) var_15)), (arr_29 [i_6] [i_6]))))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) 915642232)), (2147658018U))), (((/* implicit */unsigned int) min((arr_9 [i_8]), ((_Bool)1))))))), (max((((/* implicit */unsigned long long int) min((520192U), (((/* implicit */unsigned int) var_8))))), (max((arr_18 [i_6]), (((/* implicit */unsigned long long int) (unsigned short)59580)))))))))));
                }
            } 
        } 
        arr_31 [i_6] = ((/* implicit */int) max((min((((/* implicit */unsigned int) min((var_10), (468778776)))), (min((((/* implicit */unsigned int) (short)-15861)), (0U))))), (((/* implicit */unsigned int) max((max((var_9), (((/* implicit */int) (unsigned short)2409)))), (min((((/* implicit */int) (_Bool)1)), (856085462))))))));
    }
    var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_15)), (var_5))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (short)22763)), ((unsigned short)32028))))))), (max((max((var_0), (var_0))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (-583330858))))))));
    var_24 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) min((var_13), ((unsigned short)7066)))), (max((var_0), (((/* implicit */unsigned long long int) var_2)))))), (max((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) (unsigned char)135))))), (max((8796090925056ULL), (8796090925056ULL)))))));
}
