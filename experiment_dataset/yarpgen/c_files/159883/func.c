/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159883
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
    var_14 = ((/* implicit */short) var_9);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), ((+(max((((/* implicit */unsigned long long int) 1009796317)), (0ULL)))))));
        arr_2 [i_0] |= ((/* implicit */unsigned int) var_8);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = (~(((/* implicit */int) ((_Bool) 1227707046))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) (unsigned short)33818);
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((-1009796311) + (1227707046))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) -1009796305)) >= (arr_5 [i_1] [i_1])))))))));
                arr_15 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_2])) == (((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [i_2]))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(6393793054697992588ULL)))) ? (((-1009796317) ^ (((/* implicit */int) (signed char)-18)))) : ((~(((/* implicit */int) var_1)))))))));
            }
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (-(2703756113U)))) ? (((/* implicit */int) (unsigned short)42438)) : (((/* implicit */int) (_Bool)0)))))));
            arr_19 [i_4] [i_4] = (-(arr_4 [i_1 + 1]));
        }
        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_22 [10U] = ((/* implicit */short) ((int) (+(2806106205U))));
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (unsigned short)23098))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 4) 
                {
                    {
                        arr_28 [i_7 + 1] [i_6] [i_6] [i_1] = ((/* implicit */unsigned char) (+(arr_12 [i_6])));
                        var_21 = ((/* implicit */unsigned int) 524287);
                        arr_29 [i_6] [i_6] [i_7] = -524287;
                    }
                } 
            } 
        }
        arr_30 [7U] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)29382)) ? (-1009796297) : (((/* implicit */int) (unsigned short)23106))));
    }
    for (int i_8 = 2; i_8 < 18; i_8 += 4) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) 268402688U)) ? (((/* implicit */int) arr_25 [i_8])) : (((/* implicit */int) (signed char)24))))))));
        var_23 *= ((/* implicit */unsigned long long int) max(((-(1009010450U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8] [i_8])) && ((!((_Bool)0))))))));
        arr_34 [i_8 + 1] [i_8] = ((/* implicit */short) ((1363742822) % (-1111486486)));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((var_4) >> (((((524287) | (((/* implicit */int) (signed char)-23)))) + (18)))))));
        var_25 *= ((/* implicit */short) min((((/* implicit */long long int) (signed char)-18)), (min((arr_4 [i_8 - 1]), (((/* implicit */long long int) (_Bool)0))))));
    }
    for (int i_9 = 2; i_9 < 18; i_9 += 4) /* same iter space */
    {
        arr_39 [i_9] |= ((/* implicit */int) (signed char)-2);
        arr_40 [i_9] = ((/* implicit */signed char) (short)16330);
        arr_41 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)(-32767 - 1)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)7675))) : (arr_4 [i_9])));
    }
    /* LoopSeq 2 */
    for (long long int i_10 = 2; i_10 < 16; i_10 += 3) 
    {
        arr_44 [i_10] = arr_32 [i_10 - 1];
        var_26 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_1)) ? (211106232532992ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23098))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)221))))) : ((~(min((((/* implicit */int) arr_8 [i_10 + 1] [i_10 + 1] [(signed char)0])), (1048575)))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_27 *= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_45 [19ULL]))))));
        arr_48 [i_11] = ((/* implicit */unsigned long long int) -2147483644);
        /* LoopSeq 1 */
        for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            var_28 = ((/* implicit */unsigned short) (((((((_Bool)1) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)20379)))) < (((/* implicit */int) (unsigned char)35)))) ? (((unsigned int) arr_46 [i_11])) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74)))));
            /* LoopNest 3 */
            for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    for (int i_15 = 2; i_15 < 17; i_15 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42438)) ? (14976786047766866747ULL) : (((/* implicit */unsigned long long int) -1009796317)))))));
                            var_30 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3285956847U)) ? (var_5) : (((/* implicit */int) (short)0))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_45 [i_12])))))));
        }
    }
    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (short)9710)) >= (var_8)))), (var_12)))) ^ (((/* implicit */int) var_13)))))));
    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (((_Bool)1) ? (max((var_4), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (0LL) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)23097)), (-1009796315))))))))))));
}
