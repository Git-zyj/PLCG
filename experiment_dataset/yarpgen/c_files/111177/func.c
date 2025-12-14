/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111177
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
    var_13 = ((/* implicit */long long int) (signed char)-73);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0 - 1] [i_1] [16ULL] = max((((/* implicit */unsigned long long int) max((1914864915326087606LL), (((/* implicit */long long int) (signed char)73))))), (var_11));
                    arr_9 [i_0] [5ULL] [i_0] = ((/* implicit */unsigned short) (signed char)50);
                    var_14 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (min((((/* implicit */long long int) (unsigned short)2047)), (var_12)))));
                    var_15 = ((/* implicit */_Bool) (~(((long long int) -1914864915326087590LL))));
                    arr_10 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) 10696612665837254236ULL)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 2; i_3 < 11; i_3 += 4) 
    {
        for (int i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (signed char)-1);
                var_17 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (signed char)9)), ((~(var_11))))), ((-(10696612665837254219ULL)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned short) (unsigned char)101);
        arr_17 [i_5] = ((/* implicit */short) (+((~(((/* implicit */int) (signed char)9))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    arr_25 [(signed char)3] [21] [(signed char)13] [(signed char)6] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_5))))));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 2; i_8 < 22; i_8 += 2) 
                    {
                        var_19 -= ((/* implicit */unsigned long long int) (_Bool)0);
                        arr_29 [i_5] [i_6] [i_8] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8090))) + (((7ULL) << (((((/* implicit */int) (short)7442)) - (7404)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            arr_33 [i_5] [(signed char)1] [6LL] [i_8] [(_Bool)1] = (!((!(((/* implicit */_Bool) 4039004123143932187ULL)))));
                            arr_34 [i_5] = ((/* implicit */signed char) min(((~(18446744073709551614ULL))), ((~(7750131407872297392ULL)))));
                            var_20 = ((/* implicit */unsigned short) ((short) max((((/* implicit */long long int) var_8)), ((~(5439438682611669998LL))))));
                        }
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_37 [2ULL] [i_6] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) 2065467423147461595ULL)))))), (((((/* implicit */_Bool) 562949953421184ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (-5009963768116408897LL)))));
                        var_21 = ((/* implicit */signed char) (+((~(((/* implicit */int) (signed char)101))))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) min(((!(((((/* implicit */_Bool) (unsigned char)11)) || (((/* implicit */_Bool) -8962761045306116950LL)))))), (((_Bool) (short)18607))));
                }
            } 
        } 
    }
    for (int i_11 = 4; i_11 < 16; i_11 += 4) 
    {
        arr_40 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) var_9)), ((short)-32743)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10969))) : (((((/* implicit */_Bool) min((4527518150686674823ULL), (((/* implicit */unsigned long long int) var_8))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        var_23 = ((/* implicit */int) 650712690371526154LL);
        var_24 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (signed char)73)), (18446744073709551609ULL))), (((/* implicit */unsigned long long int) ((long long int) var_6)))));
    }
}
