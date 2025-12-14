/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152518
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_10 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-14754)) ? (var_1) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)22)))))))));
        arr_2 [(signed char)4] = ((/* implicit */unsigned long long int) (-((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))) : (var_2)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */int) var_3);
                        arr_9 [i_0] [i_1] [i_2] [(unsigned short)10] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_3]) : (((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)22)), (var_8)))) & (((/* implicit */int) var_7))))));
                        var_12 = arr_0 [i_0];
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_13 &= ((/* implicit */unsigned short) ((((((var_3) | (((/* implicit */unsigned int) arr_8 [i_4] [i_3] [i_2] [i_1] [i_0])))) != (((/* implicit */unsigned int) min((arr_8 [(signed char)10] [16] [i_2] [i_2] [i_4]), (var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [4ULL] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) : (var_0)))) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) ((signed char) arr_3 [(_Bool)1] [i_3] [i_0]))))) : (((/* implicit */int) (_Bool)0))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] [i_1] = ((/* implicit */unsigned long long int) max((max((-1431981032), (-1962910134))), (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))))))));
                            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-18))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_3] [i_4])), (var_1))) / (16835270120695724286ULL)))) ? (min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-32)) && (((/* implicit */_Bool) var_1))))))) : (((((/* implicit */int) (unsigned short)55038)) % (((/* implicit */int) (short)-25155))))));
                            var_16 += ((/* implicit */unsigned long long int) arr_11 [i_0] [2U] [i_2] [12] [2U]);
                        }
                        var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)23)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned char)27)))))) >> (((min((((/* implicit */unsigned int) (unsigned short)55020)), (((unsigned int) 206215268)))) - (55015U)))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((min((((unsigned long long int) (signed char)-25)), (min((var_1), (((/* implicit */unsigned long long int) (signed char)24)))))) << (((((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (signed char)-51))))) % (arr_1 [0U]))) - (159)))));
        arr_14 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((max((1921300988), (((/* implicit */int) var_7)))) & (((/* implicit */int) var_8)))))));
    }
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_18 = ((/* implicit */_Bool) max(((+((+(((/* implicit */int) (unsigned char)27)))))), (min((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (_Bool)1))))), ((-(((/* implicit */int) var_6))))))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)26)) ? ((-(((/* implicit */int) (signed char)-37)))) : (((/* implicit */int) (signed char)-25))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (((((_Bool)1) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_5])) && (((/* implicit */_Bool) arr_20 [i_5] [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) -1653141740))))))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_16 [(unsigned char)19] [i_5]))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_29 [i_5] [i_5] [i_8] [(unsigned short)14] = (unsigned short)10502;
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    arr_34 [i_5] [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(((arr_23 [i_5] [i_6] [i_5] [i_9]) ? (var_0) : (((/* implicit */long long int) 881240538))))));
                    var_22 = ((/* implicit */unsigned short) ((int) (-(arr_20 [i_5] [i_8]))));
                }
                for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    var_23 = ((/* implicit */unsigned short) max((4005811174U), (((/* implicit */unsigned int) (signed char)-28))));
                    arr_37 [5] [(_Bool)1] [i_10] [(_Bool)1] [i_6] [(unsigned short)10] = ((/* implicit */signed char) var_3);
                }
                for (unsigned int i_11 = 1; i_11 < 20; i_11 += 4) 
                {
                    var_24 &= ((/* implicit */unsigned int) (signed char)-22);
                    arr_40 [i_5] [i_6] [i_8] [i_11 - 1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)10478)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_5] [i_8] [(unsigned char)16]))))) : (((/* implicit */int) (signed char)22)))));
                    var_25 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)32768));
                    var_26 -= ((/* implicit */signed char) ((int) max((((/* implicit */unsigned short) (signed char)22)), (var_8))));
                }
            }
            /* vectorizable */
            for (unsigned short i_12 = 3; i_12 < 20; i_12 += 2) 
            {
                var_27 *= ((/* implicit */unsigned int) arr_26 [i_5] [i_6] [i_5]);
                var_28 = ((/* implicit */unsigned int) (+(1047166471)));
                var_29 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)10481))) ? (((/* implicit */unsigned int) ((var_9) << (((var_3) - (869270685U)))))) : (var_2)));
            }
            for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)57505), ((unsigned short)5191))))))) ? ((~(0))) : (max((((arr_39 [i_5] [i_6] [i_13]) % (((/* implicit */int) var_7)))), (arr_39 [i_5] [i_6] [i_13])))));
                var_31 = ((/* implicit */short) ((((max((13755540330898513652ULL), (((/* implicit */unsigned long long int) 2456016979U)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (var_3)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [7] [22])))));
            }
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
    {
        for (unsigned short i_15 = 1; i_15 < 15; i_15 += 2) 
        {
            {
                arr_53 [i_14] [i_15] = ((/* implicit */unsigned char) min((((/* implicit */int) (short)-20954)), (var_9)));
                var_32 += ((/* implicit */_Bool) arr_16 [i_14] [i_14]);
                var_33 = ((/* implicit */long long int) var_9);
            }
        } 
    } 
    var_34 &= ((/* implicit */unsigned short) ((var_1) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2141812852U), (((/* implicit */unsigned int) (unsigned char)180))))) ? (var_5) : (((/* implicit */int) (signed char)-2)))))));
}
