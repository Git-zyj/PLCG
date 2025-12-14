/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154670
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_11)))) : (((/* implicit */int) var_11))))) ? (8298680586070584751ULL) : (((unsigned long long int) (+(((/* implicit */int) var_16)))))));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (-(((((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36217))))) ? ((((_Bool)0) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)14)))) : ((~(((/* implicit */int) (_Bool)0)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1]))))), ((((~(-3185316506384578783LL))) ^ (((((/* implicit */_Bool) (unsigned char)255)) ? (580238994533830104LL) : (((/* implicit */long long int) ((/* implicit */int) (short)31)))))))));
                            var_22 = ((/* implicit */long long int) (-(((arr_3 [i_3] [i_3 - 1] [i_2 - 3]) ? (((/* implicit */int) arr_3 [i_0] [i_3 - 1] [i_2 - 3])) : (((/* implicit */int) arr_3 [(short)10] [i_3 - 1] [i_2 - 3]))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))));
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)7136);
                var_23 = min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-71)));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_2 [(short)13])) ? (8754320141849269879ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65489))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26933))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)))) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)53986)) ? (5389413822605562214LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22961)))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                            {
                                var_25 -= ((/* implicit */short) ((unsigned char) arr_8 [i_4 + 3] [i_4 + 2] [20ULL] [i_4 - 2]));
                                var_26 = ((((/* implicit */_Bool) arr_7 [i_6 + 2])) ? (((((/* implicit */_Bool) 9674260259768432580ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11550))) : (arr_14 [19LL] [i_1] [i_4 + 3] [i_5]))) : (((/* implicit */unsigned long long int) ((long long int) var_15))));
                            }
                            arr_19 [i_5] [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3185316506384578783LL)) || (((/* implicit */_Bool) ((((-2993980949044577064LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-71))))) ? (11333301618941317966ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_1])))))))));
                            /* LoopSeq 2 */
                            for (signed char i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                            {
                                arr_22 [(_Bool)1] [i_4] [i_5] [i_5] = ((/* implicit */short) (unsigned short)56215);
                                arr_23 [i_0] [i_1] [i_4 + 4] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 580238994533830104LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31))) : (min((min((9198201705052495003ULL), (((/* implicit */unsigned long long int) 3185316506384578783LL)))), (((/* implicit */unsigned long long int) -4638284886842977227LL))))));
                                arr_24 [i_0] [(short)13] [(short)2] [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(arr_21 [i_0] [i_0] [(_Bool)1]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)-32)), (arr_20 [i_0] [i_1] [i_5] [i_7]))))))) ? (8665164773432065157LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                            for (signed char i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                            {
                                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0)))))));
                                var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), ((unsigned short)46)))) : (((/* implicit */int) (_Bool)0)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) (unsigned char)161)))) : ((-(((/* implicit */int) arr_25 [i_0] [(short)6] [i_5] [i_5] [i_8]))))))));
                            }
                            arr_28 [i_0] [i_5] [(short)17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_18 [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5]) ? (((/* implicit */int) arr_20 [i_5] [i_5 + 1] [i_5 + 1] [i_5])) : (((/* implicit */int) (unsigned short)11550))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) 2658157461U)), (-6076041789137269060LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) max((var_29), (((unsigned char) max((var_19), (var_8))))));
    var_30 = ((/* implicit */long long int) var_4);
}
