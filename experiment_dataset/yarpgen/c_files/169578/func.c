/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169578
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
    var_20 = ((/* implicit */unsigned long long int) var_18);
    var_21 = ((/* implicit */int) min((14802955237347278557ULL), (((/* implicit */unsigned long long int) (unsigned short)32768))));
    var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))), (((/* implicit */long long int) var_11))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */short) (unsigned short)32768);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                arr_8 [i_0] = ((/* implicit */unsigned short) ((signed char) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_3 [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2])))));
                /* LoopSeq 3 */
                for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_14 [i_3] [i_3] [i_2] [3U] [3U] [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2 + 2] [(_Bool)1] [i_2 + 1] [i_3] [i_2]))))), ((+(max((arr_6 [i_0] [i_1] [i_1]), (((/* implicit */int) arr_11 [i_0] [i_0 - 2] [i_0] [i_3] [i_3]))))))));
                        var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (short)-18155)) : (((/* implicit */int) (signed char)32)))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)121)), ((unsigned short)32761))))));
                        var_24 = ((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 3] [i_3] [i_4]);
                    }
                    arr_15 [17ULL] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */short) arr_11 [i_3] [i_1] [i_2] [i_1] [i_3]))))) ? (((/* implicit */int) ((5089432398083345496LL) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))) ? (((((/* implicit */int) arr_11 [(_Bool)1] [i_3 + 2] [i_3] [i_3 + 1] [i_3])) & (((/* implicit */int) arr_11 [i_3] [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3])))) : ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [(signed char)7])) : (arr_6 [(signed char)13] [i_1] [i_1])))))));
                    arr_16 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (-(max((min((arr_12 [i_0] [i_1] [i_3] [i_3] [i_2 + 4]), (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_3 + 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32752)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)32778)))))))));
                    var_25 = ((/* implicit */_Bool) -1LL);
                }
                for (unsigned short i_5 = 4; i_5 < 19; i_5 += 3) 
                {
                    arr_21 [i_0] [(unsigned char)0] [i_2] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)120))))), (min((((/* implicit */long long int) (signed char)-126)), (arr_1 [i_0 - 2])))));
                    var_26 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_5 [(unsigned short)13] [i_1] [i_2 + 3]), (((/* implicit */unsigned char) var_9))))) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2 + 2])) : (((/* implicit */int) ((unsigned char) var_18))))) >> (((max((((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_11 [(unsigned char)16] [10LL] [i_5] [i_5] [(unsigned char)6])))), (((/* implicit */int) arr_5 [i_0 - 2] [i_2 + 4] [i_5])))) - (37192)))));
                    var_27 = (+((-(((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned int i_6 = 1; i_6 < 19; i_6 += 1) 
                {
                    arr_24 [18U] [18U] &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_2 + 4] [i_6 - 1])) ? (var_14) : (((/* implicit */long long int) arr_6 [i_0 - 1] [i_2 - 1] [i_6 + 1]))))));
                    var_28 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) (~((+(((/* implicit */int) var_7))))))), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])));
                    var_29 = ((/* implicit */unsigned int) var_7);
                }
            }
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)12])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (984867690U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194)))))) : (var_3)));
        }
    }
    for (short i_7 = 4; i_7 < 20; i_7 += 3) 
    {
        var_31 = var_5;
        var_32 = ((/* implicit */long long int) arr_27 [i_7 - 1]);
        var_33 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) min(((unsigned short)39424), (((/* implicit */unsigned short) (signed char)-123))))), (var_1)));
        /* LoopNest 3 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                for (short i_10 = 3; i_10 < 20; i_10 += 1) 
                {
                    {
                        var_34 = ((/* implicit */int) ((unsigned short) (signed char)-120));
                        var_35 = ((/* implicit */unsigned char) var_4);
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) 8623784917520829726ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-27121)))))))) : (((var_9) ? (arr_37 [i_7] [10U] [i_7 - 2] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) (+(arr_36 [i_10] [i_8] [i_7]))))))));
                    }
                } 
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) == ((+(((9822959156188721889ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76)))))))));
}
