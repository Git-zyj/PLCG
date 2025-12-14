/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132516
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
    var_10 = ((/* implicit */short) max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) (unsigned short)65535))))) ? (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_5)) - (4834))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (var_9) : (var_9)))))));
    var_11 = ((/* implicit */signed char) var_3);
    var_12 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (var_3) : (var_3))) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)6))))))) - (((/* implicit */int) ((unsigned short) var_6)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((long long int) max((((((((/* implicit */int) arr_2 [i_0] [(short)1])) + (2147483647))) << (((((/* implicit */int) var_0)) - (63174))))), ((~(((/* implicit */int) (unsigned char)0))))))))));
        var_14 = ((/* implicit */unsigned char) (short)-798);
        arr_3 [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0))))) ? (((unsigned long long int) arr_2 [(unsigned char)16] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 0U)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_1 + 1] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_1 + 1])) - (163)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [13LL]))))), (max((((/* implicit */unsigned short) arr_0 [i_1 + 1])), ((unsigned short)13))))))) : ((~(var_2)))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])))) & (var_9)));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [16]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3379995563203958084LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_2 [i_1] [i_1 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_8), (var_4))))) : (((((/* implicit */_Bool) arr_2 [i_1] [(short)2])) ? (3221830856164304937LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)10]))))))))))));
        arr_9 [0] [(unsigned short)6] |= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) arr_0 [i_1])), ((short)-8192))))))) ? (min((((/* implicit */unsigned int) arr_6 [16])), ((~(arr_7 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [12U]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)8191)) || (((/* implicit */_Bool) (unsigned char)255)))))))))));
    }
    for (short i_2 = 1; i_2 < 13; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
        {
            arr_17 [i_2] [i_2] = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) / (((/* implicit */int) (unsigned short)17220))))))), (max(((!(((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) var_1))))))));
            var_18 = (((((-2147483647 - 1)) / (((/* implicit */int) ((short) var_5))))) / ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19443))))))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2 + 2] [i_2 + 2])) ? (-535967670) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2 + 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(signed char)15] [i_2 + 4] [i_2 + 1])) && (((/* implicit */_Bool) arr_13 [i_2 + 2] [i_2 + 2]))))) : (((((/* implicit */_Bool) 13453507291060723395ULL)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_6 [i_2]))))));
            var_20 = var_4;
        }
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (~(arr_12 [i_2 - 1])))))));
            var_22 = (~(((/* implicit */int) var_1)));
        }
        arr_22 [i_2] [i_2] = (~(max((((/* implicit */int) arr_2 [i_2 + 2] [i_2])), (max((((/* implicit */int) arr_5 [i_2])), (var_3))))));
    }
    for (short i_5 = 1; i_5 < 13; i_5 += 3) /* same iter space */
    {
        var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((signed char) 3248098690661388520LL))) + ((~(((/* implicit */int) arr_14 [i_5 + 1] [i_5 + 1] [i_5])))))))));
        /* LoopSeq 2 */
        for (long long int i_6 = 2; i_6 < 15; i_6 += 2) 
        {
            arr_27 [i_5] [2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_14 [i_6 + 2] [(unsigned char)9] [12ULL])) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (unsigned short)11315))))))) : (((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) (unsigned char)255))))) ? ((~(arr_7 [i_5 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3))))))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_0))));
        }
        for (int i_7 = 2; i_7 < 16; i_7 += 1) 
        {
            arr_30 [(unsigned short)15] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_29 [i_7])))))), (max((((unsigned int) (short)32748)), (((/* implicit */unsigned int) (unsigned short)21410))))));
            /* LoopSeq 4 */
            for (int i_8 = 1; i_8 < 15; i_8 += 2) 
            {
                var_25 = ((/* implicit */short) (~((((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5 + 3] [i_5 + 4]))))) : (((/* implicit */int) max((arr_23 [(short)6]), ((short)32748))))))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_7 - 2] [i_5 - 1]))))), (arr_0 [i_8]))))));
                arr_33 [i_5 + 3] [i_5] [i_5] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_5]))) == (((((/* implicit */unsigned int) ((((/* implicit */_Bool) -975030763)) ? (-535967642) : (((/* implicit */int) var_4))))) - (((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
            }
            for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                var_27 = ((/* implicit */short) var_8);
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((int) ((((/* implicit */_Bool) arr_2 [(short)1] [i_7 - 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_9])) && (((/* implicit */_Bool) (~(-9223372036854775784LL))))))))))));
                var_29 = var_0;
            }
            for (short i_10 = 1; i_10 < 16; i_10 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(256336609)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65532))))) ? ((+(((((/* implicit */_Bool) arr_19 [i_5 + 4] [i_7 + 1] [(unsigned short)10])) ? (arr_20 [i_5 - 1] [i_5 + 1] [i_5]) : (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) (-((+(arr_11 [i_5] [i_10])))))))))));
                var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_23 [i_5 + 1]))));
                arr_40 [9] [i_7] [i_7] [7LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 535967669)) ? (1633282642U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14990)))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_5] [i_5])) >> (((((/* implicit */int) var_0)) - (63152)))))), (-9223372036854775796LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)39246)))));
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_10 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_10 - 1]))) ^ (6413668784017365751LL))))));
                var_33 = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_14 [i_5 + 1] [i_5 + 1] [i_5])))), (((/* implicit */int) var_5))));
            }
            for (short i_11 = 1; i_11 < 16; i_11 += 2) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_1 [i_7]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((arr_41 [i_11] [i_7 - 2] [i_7 - 2] [(unsigned short)5]) > (((((/* implicit */int) arr_38 [(short)4] [i_11 + 1])) | (((/* implicit */int) var_0)))))))));
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_35 [i_5] [i_7] [i_7])), (143833713099145216LL)))) ? ((~(535967681))) : (((((/* implicit */int) (unsigned short)3910)) << (((2661684639U) - (2661684639U))))))) : ((~(((((/* implicit */int) (unsigned char)1)) << (((((/* implicit */int) arr_38 [i_7 - 2] [i_7 - 2])) - (104)))))))));
            }
            /* LoopSeq 1 */
            for (short i_12 = 1; i_12 < 16; i_12 += 1) 
            {
                arr_45 [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), ((+(-9223372036854775796LL))))))));
                var_36 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned char)237)))));
                var_37 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 562949953421056LL)) || (((/* implicit */_Bool) -1890069295))))), (arr_7 [i_5 + 4]))))));
            }
        }
    }
}
