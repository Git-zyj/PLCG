/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105177
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_15)), (932005537)))) ? (var_8) : (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((long long int) var_8))) : (var_10)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -932005538)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) : (16849378044425740943ULL)))) ? (((/* implicit */unsigned long long int) 3070295607U)) : ((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
        var_18 = ((/* implicit */unsigned short) max((((0LL) | (((((/* implicit */_Bool) 343250074222199714LL)) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_14)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
        arr_3 [i_0] [(unsigned short)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) (((-(-932005538))) & (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))))) : ((-(var_16)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -932005528)) ? (((/* implicit */int) (_Bool)0)) : (var_4)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_1]))) : (((/* implicit */long long int) ((unsigned int) 1224671675U)))));
            var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 932005537)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10)))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 2; i_5 < 11; i_5 += 3) 
                    {
                        {
                            arr_17 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)0))));
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_4 - 1])) ? (((/* implicit */int) (short)-23986)) : (((/* implicit */int) arr_10 [i_3] [i_4 - 1]))))) ^ ((~((~(4910177298274793807ULL)))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)31))))) << (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) -932005537))), (var_4)))) : (((unsigned int) arr_6 [i_2] [i_2]))));
        }
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) ((_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) arr_5 [i_0])) - (23))))));
                        arr_25 [i_6] = ((/* implicit */int) (_Bool)0);
                        var_24 *= ((/* implicit */short) ((unsigned long long int) ((-932005522) / (((/* implicit */int) (unsigned short)22072)))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) 2054732436)) ^ (12700268254641784895ULL)))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_8 [i_6] [i_8])) ^ (((/* implicit */int) arr_24 [i_0] [i_0])))))) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_15)) == (((/* implicit */int) arr_23 [i_0] [5LL] [i_7] [i_8]))))), ((short)16240))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((9801134830725056565ULL) | (var_10)))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) 2689168022U)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_12))) : (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (4294967295U))))))));
        }
    }
    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) arr_27 [i_9]);
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 935825874U)) ? (((((/* implicit */_Bool) var_7)) ? (621460922760254211ULL) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) arr_16 [i_9] [i_9]))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) 33554431)) ? (3664670679U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_9] [i_9]))))))))));
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_11))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 621460922760254211ULL)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_10 [(short)2] [i_9]))))) ? (max((((/* implicit */unsigned long long int) arr_23 [i_9] [i_9] [(_Bool)1] [i_9])), (621460922760254211ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_0)))))) : (((/* implicit */unsigned long long int) 3850708520U))));
    }
    /* LoopSeq 1 */
    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        arr_31 [i_10] = ((/* implicit */unsigned short) (~(((unsigned long long int) ((((/* implicit */_Bool) 9801134830725056565ULL)) && (((/* implicit */_Bool) var_1)))))));
        arr_32 [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 0))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
        var_30 = ((/* implicit */unsigned int) var_7);
        arr_33 [i_10] |= ((/* implicit */int) (-(8645609242984495051ULL)));
    }
    var_31 = ((/* implicit */unsigned int) ((((int) (!(((/* implicit */_Bool) var_13))))) << (((((((/* implicit */_Bool) var_7)) ? ((+(var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-1))))))) - (931305082U)))));
    var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9)));
}
