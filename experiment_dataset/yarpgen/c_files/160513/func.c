/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160513
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) (((-(1620811293775958189LL))) / (min((((/* implicit */long long int) 3008478347U)), (-1620811293775958189LL)))));
        arr_3 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)3))))) ? (((/* implicit */long long int) 1953128891U)) : (((((/* implicit */_Bool) var_10)) ? (442449298244463116LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-60)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) -3247516397631247249LL)) : (9551959293465673661ULL)));
            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(31LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) 1286488948U)) ? (1620811293775958210LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1405)))))));
        }
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_22 = ((/* implicit */short) var_13);
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)24)) ? (3295831549U) : (var_19)));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~((+(((/* implicit */int) (_Bool)1)))))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_25 -= ((6413852956083645194ULL) <= (((/* implicit */unsigned long long int) 1286488950U)));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_5] [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (-2742106129891963474LL)));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) 3295831553U)) ? (9098313420370765577LL) : (((/* implicit */long long int) var_3)))))));
                            arr_21 [i_1] [i_1] [i_4] [i_1] [i_5] [(short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)181)) ? (((3587161117U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49884)))));
                            arr_22 [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) var_11);
                        }
                    } 
                } 
                arr_23 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */long long int) (unsigned short)49884);
            }
        }
        var_27 -= ((/* implicit */unsigned short) (~(var_19)));
        arr_24 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)49904)) ? (((/* implicit */int) (unsigned short)15652)) : (((((/* implicit */int) (_Bool)1)) << (((707806162U) - (707806148U)))))));
        arr_25 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (short)5200))));
        arr_26 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8442978154185724996LL)) ? (3821111308U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58)))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1840887301)) ? (1725452440U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (893249338268867307ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-73)))))));
        var_29 = ((((/* implicit */int) (_Bool)1)) << (((457675797U) - (457675771U))));
    }
    var_30 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (2742106129891963481LL))))))), (max((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned char) (signed char)96))))), (min((var_17), (((/* implicit */unsigned long long int) (signed char)-84))))))));
}
